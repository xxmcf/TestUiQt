#include "testbutton.h"
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QVariant>
#include <QStyle>

TestButton::TestButton(QWidget *parent)
    : QWidget(parent)
{
    this->resize(400, 500);
    setWindowFlags(Qt::FramelessWindowHint);

    m_WhiteBtn = new QPushButton(tr("White Button"), this);
    m_WhiteBtn->setObjectName("WhiteBtn");
    m_WhiteBtn->setFixedSize(100, 30);

    m_WhiteCtlBtn = new QPushButton(tr("Disable"), this);
    m_WhiteCtlBtn->setCheckable(true);
    m_WhiteCtlBtn->setFixedSize(100, 30);
    m_WhiteFont12Btn = new QPushButton(tr("Font12"), this);
    m_WhiteFont12Btn->setFixedSize(100, 30);
    m_WhiteFont14Btn = new QPushButton(tr("Font14"), this);
    m_WhiteFont14Btn->setFixedSize(100, 30);
    m_WhiteFont16Btn = new QPushButton(tr("Font16"), this);
    m_WhiteFont16Btn->setFixedSize(100, 30);
    m_WhiteFont18Btn = new QPushButton(tr("Font18"), this);
    m_WhiteFont18Btn->setFixedSize(100, 30);

    QHBoxLayout* whiteBtnLayout = new QHBoxLayout;
    whiteBtnLayout->setContentsMargins(0, 0, 0, 0);
    whiteBtnLayout->setSpacing(0);
    whiteBtnLayout->addWidget(m_WhiteBtn);
    whiteBtnLayout->addSpacing(20);
    whiteBtnLayout->addWidget(m_WhiteCtlBtn);
    whiteBtnLayout->addSpacing(20);
    whiteBtnLayout->addWidget(m_WhiteFont12Btn);
    whiteBtnLayout->addSpacing(20);
    whiteBtnLayout->addWidget(m_WhiteFont14Btn);
    whiteBtnLayout->addSpacing(20);
    whiteBtnLayout->addWidget(m_WhiteFont16Btn);
    whiteBtnLayout->addSpacing(20);
    whiteBtnLayout->addWidget(m_WhiteFont18Btn);

    m_BlueBtn = new QPushButton(tr("Blue\n Button"), this);
    m_BlueBtn->setObjectName("BlueBtn");
    m_BlueBtn->setFixedSize(100, 70);

    m_BlueCtlBtn = new QPushButton(tr("Disable"), this);
    m_BlueCtlBtn->setCheckable(true);
    m_BlueCtlBtn->setFixedSize(100, 30);
    m_BlueFont12Btn = new QPushButton(tr("Font12"), this);
    m_BlueFont12Btn->setFixedSize(100, 30);
    m_BlueFont14Btn = new QPushButton(tr("Font14"), this);
    m_BlueFont14Btn->setFixedSize(100, 30);
    m_BlueFont16Btn = new QPushButton(tr("Font16"), this);
    m_BlueFont16Btn->setFixedSize(100, 30);
    m_BlueFont18Btn = new QPushButton(tr("Font18"), this);
    m_BlueFont18Btn->setFixedSize(100, 30);

    QHBoxLayout* blueBtnLayout = new QHBoxLayout;
    blueBtnLayout->setContentsMargins(0, 0, 0, 0);
    blueBtnLayout->setSpacing(0);
    blueBtnLayout->addWidget(m_BlueBtn);
    blueBtnLayout->addSpacing(20);
    blueBtnLayout->addWidget(m_BlueCtlBtn);
    blueBtnLayout->addSpacing(20);
    blueBtnLayout->addWidget(m_BlueFont12Btn);
    blueBtnLayout->addSpacing(20);
    blueBtnLayout->addWidget(m_BlueFont14Btn);
    blueBtnLayout->addSpacing(20);
    blueBtnLayout->addWidget(m_BlueFont16Btn);
    blueBtnLayout->addSpacing(20);
    blueBtnLayout->addWidget(m_BlueFont18Btn);

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(20, 20, 20, 20);
    mainLayout->setSpacing(0);
    mainLayout->addLayout(whiteBtnLayout);
    mainLayout->addSpacing(5);
    mainLayout->addLayout(blueBtnLayout);
    mainLayout->addStretch();
    this->setLayout(mainLayout);


    connect(m_WhiteBtn, &QPushButton::clicked, this, &TestButton::slot_onWhiteBtnClicked);
    connect(m_WhiteCtlBtn, &QPushButton::clicked, this, &TestButton::slot_onWhiteCtlBtnClicked);
    connect(m_WhiteFont12Btn, &QPushButton::clicked, this, &TestButton::slot_onWhiteFont12BtnClicked);
    connect(m_WhiteFont14Btn, &QPushButton::clicked, this, &TestButton::slot_onWhiteFont14BtnClicked);
    connect(m_WhiteFont16Btn, &QPushButton::clicked, this, &TestButton::slot_onWhiteFont16BtnClicked);
    connect(m_WhiteFont18Btn, &QPushButton::clicked, this, &TestButton::slot_onWhiteFont18BtnClicked);

    connect(m_BlueBtn, &QPushButton::clicked, this, &TestButton::slot_onBlueBtnClicked);
    connect(m_BlueCtlBtn, &QPushButton::clicked, this, &TestButton::slot_onBlueCtlBtnClicked);
    connect(m_BlueFont12Btn, &QPushButton::clicked, this, &TestButton::slot_onBlueFont12BtnClicked);
    connect(m_BlueFont14Btn, &QPushButton::clicked, this, &TestButton::slot_onBlueFont14BtnClicked);
    connect(m_BlueFont16Btn, &QPushButton::clicked, this, &TestButton::slot_onBlueFont16BtnClicked);
    connect(m_BlueFont18Btn, &QPushButton::clicked, this, &TestButton::slot_onBlueFont18BtnClicked);
}

TestButton::~TestButton()
{

}

void TestButton::slot_onWhiteBtnClicked()
{
    QMessageBox::information(this, "tips", "White Button clicked!");
}

void TestButton::slot_onWhiteCtlBtnClicked(bool checked)
{
    if (checked)
    {
        m_WhiteCtlBtn->setText(tr("Enable"));
    }
    else
    {
        m_WhiteCtlBtn->setText(tr("Disable"));
    }
    m_WhiteBtn->setDisabled(checked);
}

void TestButton::slot_onWhiteFont12BtnClicked()
{
    m_WhiteBtn->setProperty("FontSize", "12");
    m_WhiteBtn->style()->polish(m_WhiteBtn);
}

void TestButton::slot_onWhiteFont14BtnClicked()
{
    m_WhiteBtn->setProperty("FontSize", "14");
    m_WhiteBtn->style()->polish(m_WhiteBtn);
}

void TestButton::slot_onWhiteFont16BtnClicked()
{
    m_WhiteBtn->setProperty("FontSize", "16");
    m_WhiteBtn->style()->polish(m_WhiteBtn);
}

void TestButton::slot_onWhiteFont18BtnClicked()
{
    m_WhiteBtn->setProperty("FontSize", "18");
    m_WhiteBtn->style()->polish(m_WhiteBtn);
}

void TestButton::slot_onBlueBtnClicked()
{
    QMessageBox::information(this, "tips", "Blue Button clicked!");
}

void TestButton::slot_onBlueCtlBtnClicked(bool checked)
{
    if (checked)
    {
        m_BlueCtlBtn->setText(tr("Enable"));
    }
    else
    {
        m_BlueCtlBtn->setText(tr("Disable"));
    }
    m_BlueBtn->setDisabled(checked);
}

void TestButton::slot_onBlueFont12BtnClicked()
{
    m_BlueBtn->setProperty("FontSize", "12");
    m_BlueBtn->style()->polish(m_BlueBtn);
}

void TestButton::slot_onBlueFont14BtnClicked()
{
    m_BlueBtn->setProperty("FontSize", "14");
    m_BlueBtn->style()->polish(m_BlueBtn);
}

void TestButton::slot_onBlueFont16BtnClicked()
{
    m_BlueBtn->setProperty("FontSize", "16");
    m_BlueBtn->style()->polish(m_BlueBtn);
}

void TestButton::slot_onBlueFont18BtnClicked()
{
    m_BlueBtn->setProperty("FontSize", "18");
    m_BlueBtn->style()->polish(m_BlueBtn);
}

