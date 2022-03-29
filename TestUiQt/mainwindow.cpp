#include "mainwindow.h"
#include "testbutton.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(400, 500);

    m_TestBtn = new TestButton(this);

    QHBoxLayout* testBtnLayout = new QHBoxLayout;
    testBtnLayout->setContentsMargins(0, 0, 0, 0);
    testBtnLayout->setSpacing(0);
    testBtnLayout->addWidget(m_TestBtn);

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(20, 20, 20, 20);
    mainLayout->setSpacing(0);
    mainLayout->addLayout(testBtnLayout);
    this->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{

}
