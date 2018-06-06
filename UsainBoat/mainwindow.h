#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <fstream>

using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void serialReceived();

    void send_message(string data, int boat);

    void split_data(string data);

    void log_in_gui(int boat, string key, string value);

    void on_radioButton_Idle_clicked();

    void on_radioButton_ManualB1_clicked();

    void on_radioButton_ManualB2_clicked();

    void on_radioButton_Follow_clicked();

    void on_radioButton_Relay_clicked();

    void on_radioButton_Auto_clicked();

private:
    Ui::MainWindow *ui_;
    QByteArray buffer_;
    int sequence_ = 0;
    ofstream logfile_;
};

#endif // MAINWINDOW_H
