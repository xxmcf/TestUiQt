#include "testlabel.h"
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QVariant>
#include <QStyle>

TestLabel::TestLabel(QWidget *parent)
    : QWidget(parent)
{
    this->resize(400, 500);
    setWindowFlags(Qt::FramelessWindowHint);

//    m_WhiteBtn = new QPushButton(tr("White Button"), this);
//    m_WhiteBtn->setObjectName("WhiteBtn");
//    m_WhiteBtn->setFixedSize(100, 30);

//    m_WhiteCtlBtn = new QPushButton(tr("Disable"), this);
//    m_WhiteCtlBtn->setCheckable(true);
//    m_WhiteCtlBtn->setFixedSize(100, 30);
//    m_WhiteFont12Btn = new QPushButton(tr("Font12"), this);
//    m_WhiteFont12Btn->setFixedSize(100, 30);
//    m_WhiteFont14Btn = new QPushButton(tr("Font14"), this);
//    m_WhiteFont14Btn->setFixedSize(100, 30);
//    m_WhiteFont16Btn = new QPushButton(tr("Font16"), this);
//    m_WhiteFont16Btn->setFixedSize(100, 30);
//    m_WhiteFont18Btn = new QPushButton(tr("Font18"), this);
//    m_WhiteFont18Btn->setFixedSize(100, 30);

//    QHBoxLayout* whiteBtnLayout = new QHBoxLayout;
//    whiteBtnLayout->setContentsMargins(0, 0, 0, 0);
//    whiteBtnLayout->setSpacing(0);
//    whiteBtnLayout->addWidget(m_WhiteBtn);
//    whiteBtnLayout->addSpacing(20);
//    whiteBtnLayout->addWidget(m_WhiteCtlBtn);
//    whiteBtnLayout->addSpacing(20);
//    whiteBtnLayout->addWidget(m_WhiteFont12Btn);
//    whiteBtnLayout->addSpacing(20);
//    whiteBtnLayout->addWidget(m_WhiteFont14Btn);
//    whiteBtnLayout->addSpacing(20);
//    whiteBtnLayout->addWidget(m_WhiteFont16Btn);
//    whiteBtnLayout->addSpacing(20);
//    whiteBtnLayout->addWidget(m_WhiteFont18Btn);

//    m_BlueBtn = new QPushButton(tr("Blue\n Button"), this);
//    m_BlueBtn->setObjectName("BlueBtn");
//    m_BlueBtn->setFixedSize(100, 70);

//    m_BlueCtlBtn = new QPushButton(tr("Disable"), this);
//    m_BlueCtlBtn->setCheckable(true);
//    m_BlueCtlBtn->setFixedSize(100, 30);
//    m_BlueFont12Btn = new QPushButton(tr("Font12"), this);
//    m_BlueFont12Btn->setFixedSize(100, 30);
//    m_BlueFont14Btn = new QPushButton(tr("Font14"), this);
//    m_BlueFont14Btn->setFixedSize(100, 30);
//    m_BlueFont16Btn = new QPushButton(tr("Font16"), this);
//    m_BlueFont16Btn->setFixedSize(100, 30);
//    m_BlueFont18Btn = new QPushButton(tr("Font18"), this);
//    m_BlueFont18Btn->setFixedSize(100, 30);

//    QHBoxLayout* blueBtnLayout = new QHBoxLayout;
//    blueBtnLayout->setContentsMargins(0, 0, 0, 0);
//    blueBtnLayout->setSpacing(0);
//    blueBtnLayout->addWidget(m_BlueBtn);
//    blueBtnLayout->addSpacing(20);
//    blueBtnLayout->addWidget(m_BlueCtlBtn);
//    blueBtnLayout->addSpacing(20);
//    blueBtnLayout->addWidget(m_BlueFont12Btn);
//    blueBtnLayout->addSpacing(20);
//    blueBtnLayout->addWidget(m_BlueFont14Btn);
//    blueBtnLayout->addSpacing(20);
//    blueBtnLayout->addWidget(m_BlueFont16Btn);
//    blueBtnLayout->addSpacing(20);
//    blueBtnLayout->addWidget(m_BlueFont18Btn);

//    QVBoxLayout* mainLayout = new QVBoxLayout;
//    mainLayout->setContentsMargins(20, 20, 20, 20);
//    mainLayout->setSpacing(0);
//    mainLayout->addLayout(whiteBtnLayout);
//    mainLayout->addSpacing(5);
//    mainLayout->addLayout(blueBtnLayout);
//    mainLayout->addStretch();
//    this->setLayout(mainLayout);


//    connect(m_WhiteBtn, &QPushButton::clicked, this, &TestLabel::slot_onWhiteBtnClicked);
//    connect(m_WhiteCtlBtn, &QPushButton::clicked, this, &TestLabel::slot_onWhiteCtlBtnClicked);
//    connect(m_WhiteFont12Btn, &QPushButton::clicked, this, &TestLabel::slot_onWhiteFont12BtnClicked);
//    connect(m_WhiteFont14Btn, &QPushButton::clicked, this, &TestLabel::slot_onWhiteFont14BtnClicked);
//    connect(m_WhiteFont16Btn, &QPushButton::clicked, this, &TestLabel::slot_onWhiteFont16BtnClicked);
//    connect(m_WhiteFont18Btn, &QPushButton::clicked, this, &TestLabel::slot_onWhiteFont18BtnClicked);

//    connect(m_BlueBtn, &QPushButton::clicked, this, &TestLabel::slot_onBlueBtnClicked);
//    connect(m_BlueCtlBtn, &QPushButton::clicked, this, &TestLabel::slot_onBlueCtlBtnClicked);
//    connect(m_BlueFont12Btn, &QPushButton::clicked, this, &TestLabel::slot_onBlueFont12BtnClicked);
//    connect(m_BlueFont14Btn, &QPushButton::clicked, this, &TestLabel::slot_onBlueFont14BtnClicked);
//    connect(m_BlueFont16Btn, &QPushButton::clicked, this, &TestLabel::slot_onBlueFont16BtnClicked);
//    connect(m_BlueFont18Btn, &QPushButton::clicked, this, &TestLabel::slot_onBlueFont18BtnClicked);
}

TestLabel::~TestLabel()
{

}

