#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class TestButton;
class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    TestButton* m_TestBtn = nullptr;
};

#endif // MAINWINDOW_H
