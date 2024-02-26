#include "mainwindow.h"
#include <QDebug>
#include <QLabel>
#include <QWidget>
#include <QString>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    title = "OOAD Task";
    author = "By Gevorg Khachatryan";
    isbn = "111222333";

    displayBookDetails();
}

MainWindow::~MainWindow() {}

void MainWindow::displayBookDetails() {
    qDebug() << "Title: " << title;
    qDebug() << "Author: " << author;
    qDebug() << "ISBN: " << isbn;
}

QString MainWindow::getTitle() const {
    return title;
}

QString MainWindow::getAuthor() const {
    return author;
}

QString MainWindow::getISBN() const {
    return isbn;
}

void MainWindow::setTitle(const QString &newTitle) {
    title = newTitle;
}

void MainWindow::setAuthor(const QString &newAuthor) {
    author = newAuthor;
}

void MainWindow::setISBN(const QString &newISBN) {
    isbn = newISBN;
}


