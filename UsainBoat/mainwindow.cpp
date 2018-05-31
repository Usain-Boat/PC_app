#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
QSerialPort serial;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serial.open(QIODevice::ReadWrite);
    serial.setPortName("com5");
    serial.setBaudRate(QSerialPort::Baud9600);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);
    connect(&serial, &QSerialPort::readyRead, this, &MainWindow::serialReceived);

    if(!serial.open(QIODevice::ReadWrite)) std::cout << "error opening port\n";
}

MainWindow::~MainWindow()
{
    delete ui;
    serial.close();
}

void MainWindow::serialReceived(){
    buffer.append(serial.readAll());
    if(buffer.contains('\n')) {
        ui->LogDataBrowser->append(buffer);
        buffer.clear();
    }
}
