#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    FMOD::System_Create(&system);
    system->init(2,FMOD_INIT_NORMAL,0);
    system->createSound("wave.mp3",FMOD_DEFAULT,0,&sound);
    system->playSound(sound,0,true,&channel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //system->release();
    system->playSound(sound,0,false,&channel);
}
