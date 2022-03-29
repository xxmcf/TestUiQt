#include "mainwindow.h"
#include "testbutton.h"
#include "testlabel.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTabWidget>
#include <QTabBar>
#include <QProxyStyle>
#include <QPainter>
#include <QDebug>
#include <QMessageBox>

class CustomTabStyle : public QProxyStyle
{
public:
    void drawItemText(QPainter* painter, const QRect& rectangle, int alignment,
        const QPalette& palette, bool enabled, const QString& text,
        QPalette::ColorRole textRole) const
    {
        qDebug() << __FUNCTION__ << text;
        QMessageBox::information(nullptr, QString("%1---%2").arg(__FUNCTION__).arg(text), tr("tip"));
        painter->save();
        alignment = Qt::AlignLeft | Qt::AlignVCenter;
        painter->translate(0, -1);
        QCommonStyle::drawItemText(painter, rectangle,
            alignment,
            palette,
            enabled,
            text,
            textRole);

        painter->restore();
    }
};

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(400, 500);

    m_Tab = new QTabWidget(this);
    m_Tab->setAttribute(Qt::WA_StyledBackground);
    m_Tab->tabBar()->setStyle(new CustomTabStyle);

    m_TestBtn = new TestButton(this);
    m_TestLabel = new TestLabel(this);

    addWidget(m_TestBtn, tr("QPushButton"));
    addWidget(m_TestLabel, tr("QLabel"));

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(20, 20, 20, 20);
    mainLayout->setSpacing(0);
    mainLayout->addWidget(m_Tab);
    this->setLayout(mainLayout);

    m_Tab->setCurrentIndex(m_Tab->count()-1);

}

MainWindow::~MainWindow()
{

}

void MainWindow::addWidget(QWidget* widget, const QString& title)
{
    m_Tab->addTab(widget, title);
}
