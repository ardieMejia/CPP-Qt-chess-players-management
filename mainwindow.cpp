#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qpushbutton.h>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  
  // connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onButtonClicked;

  // ui->label->setText("hello hello");
  // ui->label->setText("hello hello");
  
}

MainWindow::~MainWindow()
{
  delete ui;
}



// static void fill_a_text()
// {
  // ui->label->setText("New Text After Button Click"); // Change the label text
// }

// QObject::connect(pushButton, &QPushButton::clicked, [textEdit]() {
//   textEdit->append("Text inserted by button.\n"); // Appends text to a new line
//   // Or textEdit->insertPlainText("Text inserted by button."); for plain text
//  });


