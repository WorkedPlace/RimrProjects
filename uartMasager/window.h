#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <accaunt.h>

namespace Ui {
class MainWindow;
}

/*
    start window with messaging
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *_sendButton = NULL;
    QPushButton *_settingButton = NULL;
    QTextEdit *_textBox = NULL;
};

#endif // WINDOW_H
