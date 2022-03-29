#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class TestButton;
class TestLabel;
class QTabWidget;
class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void addWidget(QWidget* widget, const QString& title);

private:
    TestButton* m_TestBtn = nullptr;
    TestLabel* m_TestLabel = nullptr;
    QTabWidget* m_Tab= nullptr;
};

#endif // MAINWINDOW_H
