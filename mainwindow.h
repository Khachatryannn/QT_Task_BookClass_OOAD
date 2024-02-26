#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString getTitle() const;
    QString getAuthor() const;
    QString getISBN() const;

    void setTitle(const QString &newTitle);
    void setAuthor(const QString &newAuthor);
    void setISBN(const QString &newISBN);

private:
    void displayBookDetails();

    QString title;
    QString author;
    QString isbn;
};

#endif // MAINWINDOW_H
