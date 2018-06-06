#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <sstream>

QSerialPort serial;
int sequence = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow)
{
    ui_->setupUi(this);
    serial.open(QIODevice::ReadWrite);
    serial.setPortName("com5");
    serial.setBaudRate(QSerialPort::Baud9600);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);
    connect(&serial, &QSerialPort::readyRead, this, &MainWindow::serialReceived);

    if(!serial.open(QIODevice::ReadWrite)) std::cout << "error opening port\n";

    send_message("mode=0", 1);
    send_message("mode=0", 2);

}

MainWindow::~MainWindow()
{
    delete ui_;
    serial.close();
}

void MainWindow::serialReceived(){
    buffer_.append(serial.readAll());
    if(buffer_.contains('\n')) {
        ui_->LogDataBrowser->append(buffer_);
        logfile_.open("LogData.txt", fstream::app|fstream::out);
        logfile_ << buffer_.toStdString() << endl;
        logfile_.close();
        split_data(buffer_.toStdString());
        buffer_.clear();
    }
}

void MainWindow::split_data(string data){
    char *str = new char[data.length() + 1];
    strcpy(str, data.c_str());
    char *key_value;
    char *key_value_s;
    int boat=0;


    key_value = strtok_r(str, " ", &key_value_s);

    while (key_value)
    {
        char *key, *value, *s;
        ostringstream oskey, osvalue;
        key = strtok_r(key_value, "=", &s);
        value = strtok_r(NULL, "=", &s);
        oskey << key;
        osvalue << value;
        cout << "key: "<< oskey.str() << " value: " << osvalue.str() <<endl;
        if((oskey.str() == "boat" && osvalue.str() == "1") || boat == 1){
            boat = 1;
            log_in_gui(boat, oskey.str(), osvalue.str());
        } else if((oskey.str() == "boat" && osvalue.str() == "2") || boat == 2){
            boat = 2;
            log_in_gui(boat, oskey.str(), osvalue.str());
        }

        key_value = strtok_r(NULL, " ", &key_value_s);
    }
    delete[] str;
}

void MainWindow::log_in_gui(int boat, string key, string value){
    if(boat ==1){
        if(key == "motor1_current"){
            ui_->lcd_b1l->display(QString::fromStdString(value));
        } else if(key == "motor2_current"){
            ui_->lcd_b1r->display(QString::fromStdString(value));
        } else if (key == "speed"){
            ui_->lcd_speed1->display(QString::fromStdString(value));
        }
    } else if(boat ==2){
        if(key == "motor1_current"){
            ui_->lcd_b2l->display(QString::fromStdString(value));
        } else if(key == "motor2_current"){
            ui_->lcd_b2r->display(QString::fromStdString(value));
        } else if (key == "speed"){
            ui_->lcd_speed2->display(QString::fromStdString(value));
        }
    }
}

void MainWindow::send_message(string data, int boat){
    logfile_.open("LogData.txt", fstream::app|fstream::out);

    string message = "POST " + to_string(sequence_) + " 0 " + to_string(boat) + " " + to_string(data.size()) + " " + data;
    serial.write(buffer_.fromStdString(message));

    ui_->LogDataBrowser->append(buffer_.fromStdString(message));
    logfile_ << message << endl;
    sequence_++;

    logfile_.close();
}

void MainWindow::on_radioButton_Idle_clicked()
{
    send_message("mode=0", 1);
    send_message("mode=0", 2);
}

void MainWindow::on_radioButton_ManualB1_clicked()
{
    send_message("mode=1", 1);
    send_message("mode=0", 2);
}

void MainWindow::on_radioButton_ManualB2_clicked()
{
    send_message("mode=1", 2);
    send_message("mode=0", 1);
}

void MainWindow::on_radioButton_Follow_clicked()
{
    send_message("mode=2", 1);
    send_message("mode=2", 2);
}

void MainWindow::on_radioButton_Relay_clicked()
{
    send_message("mode=3", 1);
    send_message("mode=3", 2);
}

void MainWindow::on_radioButton_Auto_clicked()
{
    send_message("mode=4", 1);
    send_message("mode=4", 2);
}


