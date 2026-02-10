#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QIcon folderIcon = style()->standardIcon(QStyle::SP_DirIcon);
    QIcon fileIcon = style()->standardIcon(QStyle::SP_FileIcon);

    QTreeWidgetItem *folder = new QTreeWidgetItem();
    folder->setText(0, "Documents");
    folder->setIcon(0, folderIcon);

    QTreeWidgetItem *file = new QTreeWidgetItem(folder);
    file->setText(0, "report.txt");
    file->setIcon(0, fileIcon);

    ui->treeWidget->addTopLevelItem(folder);
    ui->treeWidget->addTopLevelItem(file);
}


void MainWindow::on_saveFileButton_clicked()
{
    string fileContent = ui->plainTextEdit->toPlainText().toStdString();
    cout << fileContent << endl;

    QIcon fileIcon = style()->standardIcon(QStyle::SP_FileIcon);
    QIcon folderIcon = style()->standardIcon(QStyle::SP_DirIcon);

    QTreeWidgetItem *file = new QTreeWidgetItem();
    file->setText(0, "untitled.txt");
    file->setIcon(0, fileIcon);

    QTreeWidgetItem *folder = new QTreeWidgetItem();
    folder->setText(0, "C:/");
    folder->setIcon(0, folderIcon);

    ui->treeWidget->addTopLevelItem(file);
    ui->treeWidget->addTopLevelItem(folder);
}


void MainWindow::on_incrementSize_clicked()
{
    ui->treeWidget->setIconSize(QSize(32, 32));
}


void MainWindow::on_decrementSize_clicked()
{
    ui->treeWidget->setIconSize(QSize(16, 16));
}

