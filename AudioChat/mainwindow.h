#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fmod.hpp"
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
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    FMOD::System *system;
    FMOD::Sound *sound;
    FMOD::Channel *channel;
};

#endif // MAINWINDOW_H
