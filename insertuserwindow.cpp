

#include <iostream>
#include "insertuserwindow.h"
#include "ui_insertuserwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>



  


InsertUserWindow::InsertUserWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::InsertUserWindow)
{
  ui->setupUi(this);


  
}

InsertUserWindow::~InsertUserWindow()
{
  delete ui;
}



void InsertUserWindow::on_insertUser_clicked(){
  QSqlQuery query;
  query.prepare("INSERT INTO users (name, age) "
		"VALUES (:name, :age)");
  // query.bindValue(":id", 1001);
  // qDebug() << "textstring get " <<;
  QString name = ui->textEditName->toPlainText();
  QString age = ui->textEditAge->toPlainText();
  query.bindValue(":name", name);
  query.bindValue(":age", age);
  query.exec();
}









