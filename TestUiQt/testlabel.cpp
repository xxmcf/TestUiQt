#include "testlabel.h"
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QVariant>
#include <QStyle>
#include <QLabel>
#include <QPaintEvent>
#include <QPainter>
#include <QStyleOption>
#include <QResizeEvent>

TestLabel::TestLabel(QWidget *parent)
    : QWidget(parent)
{
    //QMessageBox::information(this, "121121", "tip");
    this->resize(400, 500);
    setWindowFlags(Qt::FramelessWindowHint);

    m_TextLabel = new QLabel(tr("TitileLabel"), this);
    m_TextLabel->setFixedSize(300, 100);
    m_TextLabel->setObjectName("TitleLabel");
    m_TextLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    m_TextLabelLineHeight20Btn = new QPushButton(tr("LineHeight20"), this);
    m_TextLabelLineHeight20Btn->setFixedSize(120, 30);
    m_TextLabelLineHeight40Btn = new QPushButton(tr("LineHeight40"), this);
    m_TextLabelLineHeight40Btn->setFixedSize(120, 30);
    m_TextLabelLineHeight60Btn = new QPushButton(tr("LineHeight60"), this);
    m_TextLabelLineHeight60Btn->setFixedSize(120, 30);
    m_TextLabelLineHeight80Btn = new QPushButton(tr("LineHeight80"), this);
    m_TextLabelLineHeight80Btn->setFixedSize(120, 30);
    m_TextLabelLineHeightBtn = new QPushButton(tr("LineHeight100"), this);
    m_TextLabelLineHeightBtn->setFixedSize(120, 30);

    m_TextLabelUnderLineBtn = new QPushButton(tr("Underline"), this);
    m_TextLabelLineHeightBtn->setFixedSize(120, 30);

    m_TextLabelLineThoughBtn = new QPushButton(tr("Linethough"), this);
    m_TextLabelLineThoughBtn->setFixedSize(120, 30);

    m_TextLabelItalicBtn = new QPushButton(tr("Italic"), this);
    m_TextLabelItalicBtn->setFixedSize(120, 30);
    m_TextLabelTextIndentBtn = new QPushButton(tr("TextIndent"), this);
    m_TextLabelTextIndentBtn->setFixedSize(120, 30);

    QHBoxLayout* textLayout = new QHBoxLayout;
    textLayout->setContentsMargins(0, 0, 0, 0);
    textLayout->setSpacing(0);
    textLayout->addWidget(m_TextLabelLineHeight20Btn, 0, Qt::AlignCenter);
    textLayout->addSpacing(5);
    textLayout->addWidget(m_TextLabelLineHeight40Btn, 0, Qt::AlignCenter);
    textLayout->addSpacing(5);
    textLayout->addWidget(m_TextLabelLineHeight60Btn, 0, Qt::AlignCenter);
    textLayout->addSpacing(5);
    textLayout->addWidget(m_TextLabelLineHeight80Btn, 0, Qt::AlignCenter);
    textLayout->addSpacing(5);
    textLayout->addWidget(m_TextLabelLineHeightBtn, 0, Qt::AlignCenter);
    textLayout->addSpacing(5);
    textLayout->addStretch();

    QHBoxLayout* textLayout2 = new QHBoxLayout;
    textLayout2->setContentsMargins(0, 0, 0, 0);
    textLayout2->setSpacing(0);
    textLayout2->addWidget(m_TextLabelUnderLineBtn);
    textLayout2->addSpacing(5);
    textLayout2->addWidget(m_TextLabelLineThoughBtn);
    textLayout2->addSpacing(5);
    textLayout2->addWidget(m_TextLabelItalicBtn);
    textLayout2->addSpacing(5);
    textLayout2->addWidget(m_TextLabelTextIndentBtn);
    textLayout2->addSpacing(5);
    textLayout2->addStretch();

    QVBoxLayout* textVLayout = new QVBoxLayout;
    textVLayout->setContentsMargins(0, 0, 0, 0);
    textVLayout->setSpacing(0);
    textVLayout->addLayout(textLayout);
    textVLayout->addLayout(textLayout2);

    QHBoxLayout* textHLayout = new QHBoxLayout;
    textHLayout->setContentsMargins(0, 0, 0, 0);
    textHLayout->setSpacing(0);
    textHLayout->addWidget(m_TextLabel);
    textHLayout->addSpacing(20);
    textHLayout->addLayout(textVLayout);
    textHLayout->addStretch();

    m_ImageLabel = new QLabel(this);
    m_ImageLabel->setFixedSize(40, 40);
    m_ImageLabel->setObjectName("BorderLabel");

    m_AvatarLabel = new QLabel(this);
    m_AvatarLabel->setFixedSize(40, 40);
    m_AvatarLabel->setObjectName("AvatarLabel");

    m_AvatarBorderLabel = new QLabel(this);
    m_AvatarBorderLabel->setFixedSize(42, 42);
    m_AvatarBorderLabel->setObjectName("AvatarBorderLabel");

    m_ImageLabel20x20Btn = new QPushButton(tr("20x20"), this);
    m_ImageLabel20x20Btn->setFixedSize(120, 30);
    m_ImageLabel40x40Btn = new QPushButton(tr("40x40"), this);
    m_ImageLabel40x40Btn->setFixedSize(120, 30);

    QHBoxLayout* imageLayout = new QHBoxLayout;
    imageLayout->setContentsMargins(0, 0, 0, 0);
    imageLayout->setSpacing(0);
    imageLayout->addWidget(m_AvatarLabel, 0, Qt::AlignCenter);
    imageLayout->addSpacing(5);
    imageLayout->addWidget(m_ImageLabel, 0, Qt::AlignCenter);
    imageLayout->addSpacing(5);
    imageLayout->addWidget(m_ImageLabel20x20Btn, 0, Qt::AlignCenter);
    imageLayout->addSpacing(5);
    imageLayout->addWidget(m_ImageLabel40x40Btn, 0, Qt::AlignCenter);
    imageLayout->addStretch();

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(20, 20, 20, 20);
    mainLayout->setSpacing(0);
    mainLayout->addLayout(textHLayout);
    mainLayout->addSpacing(20);
    mainLayout->addLayout(imageLayout);
    mainLayout->addStretch();
    this->setLayout(mainLayout);

    connect(m_TextLabelUnderLineBtn, &QPushButton::clicked, this, &TestLabel::slot_onTextLabelUnderline);
    connect(m_TextLabelLineThoughBtn, &QPushButton::clicked, this, &TestLabel::slot_onTextLabelLineThrough);
    connect(m_TextLabelItalicBtn, &QPushButton::clicked, this, &TestLabel::slot_onTextLabelItalic);
    connect(m_TextLabelTextIndentBtn, &QPushButton::clicked, this, &TestLabel::slot_onTextLabelTextIndent);
    connect(m_TextLabelLineHeightBtn, &QPushButton::clicked, this, &TestLabel::slot_onTextLableLineHeight);
    connect(m_TextLabelLineHeight20Btn, &QPushButton::clicked, this, &TestLabel::slot_onTextLableLineHeight20);
    connect(m_TextLabelLineHeight40Btn, &QPushButton::clicked, this, &TestLabel::slot_onTextLableLineHeight40);
    connect(m_TextLabelLineHeight60Btn, &QPushButton::clicked, this, &TestLabel::slot_onTextLableLineHeight60);
    connect(m_TextLabelLineHeight80Btn, &QPushButton::clicked, this, &TestLabel::slot_onTextLableLineHeight80);

    connect(m_ImageLabel20x20Btn, &QPushButton::clicked, this, &TestLabel::slot_onImageLabel20x20Btn);
    connect(m_ImageLabel40x40Btn, &QPushButton::clicked, this, &TestLabel::slot_onImageLabel40x40Btn);

}

TestLabel::~TestLabel()
{

}

void TestLabel::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    m_AvatarBorderLabel->move(m_AvatarLabel->pos()+QPoint(-1,-1));
}

void TestLabel::slot_onTextLableLineHeight()
{
    m_TextLabel->setText("<p style='line-height:100%;'>"
                         "<font style ='font-size:19px; color:#ffff00;font-weight:bold;'> 行间距测试 </font></p>"
                         "<p style='line-height:100%;'>"
                         "<font style = 'font-size:19px; color:#ffffff; '> 行间距测试行间距测试 </font></p>"
                         );
}

void TestLabel::slot_onTextLableLineHeight20()
{
    m_TextLabel->setText("<p style='line-height:20%;'>"
                         "<font style ='font-size:19px; color:#ffff00;font-weight:bold;'> 行间距测试 </font></p>"
                         "<p style='line-height:100%;'>"
                         "<font style = 'font-size:19px; color:#ffffff; '> 行间距测试行间距测试 </font></p>"
                         );
}

void TestLabel::slot_onTextLableLineHeight40()
{
    m_TextLabel->setText("<p style='line-height:40%;'>"
                         "<font style ='font-size:19px; color:#ffff00;font-weight:bold;'> 行间距测试 </font></p>"
                         "<p style='line-height:100%;'>"
                         "<font style = 'font-size:19px; color:#ffffff; '> 行间距测试行间距测试 </font></p>"
                         );
}

void TestLabel::slot_onTextLableLineHeight60()
{
    m_TextLabel->setText("<p style='line-height:60%;'>"
                         "<font style ='font-size:19px; color:#ffff00;font-weight:bold;'> 行间距测试 </font></p>"
                         "<p style='line-height:100%;'>"
                         "<font style = 'font-size:19px; color:#ffffff; '> 行间距测试行间距测试 </font></p>"
                         );
}

void TestLabel::slot_onTextLableLineHeight80()
{
    m_TextLabel->setText("<p style='line-height:80%;'>"
                         "<font style ='font-size:19px; color:#ffff00;font-weight:bold;'> 行间距测试 </font></p>"
                         "<p style='line-height:100%;'>"
                         "<font style = 'font-size:19px; color:#ffffff; '> 行间距测试行间距测试 </font></p>"
                         );
}

void TestLabel::slot_onTextLabelUnderline()
{
    QString textdecoration = m_TextLabel->property("text-decoration").toString();
    if (textdecoration != "underline")
    {
        m_TextLabel->setProperty("text-decoration", "underline");
    }
    else
    {
        m_TextLabel->setProperty("text-decoration", "");
    }
    m_TextLabel->style()->polish(m_TextLabel);
}

void TestLabel::slot_onTextLabelLineThrough()
{
    QString textdecoration = m_TextLabel->property("text-decoration").toString();
    if (textdecoration != "line-through")
    {
        m_TextLabel->setProperty("text-decoration", "line-through");
    }
    else
    {
        m_TextLabel->setProperty("text-decoration", "");
    }
    m_TextLabel->style()->polish(m_TextLabel);
}

void TestLabel::slot_onTextLabelItalic()
{
    QString textdecoration = m_TextLabel->property("font-style").toString();
    if (textdecoration != "italic")
    {
        m_TextLabel->setProperty("font-style", "italic");
    }
    else
    {
        m_TextLabel->setProperty("font-style", "");
    }
    m_TextLabel->style()->polish(m_TextLabel);
}

void TestLabel::slot_onTextLabelTextIndent()
{
    m_TextLabel->setText("<p style='letter-spacing:10px;'>hello world</p>");
}

void TestLabel::slot_onImageLabel20x20Btn()
{
    QString strSize = m_ImageLabel->property("ImageSize").toString();
    if (strSize != "20x20")
    {
        m_ImageLabel->setProperty("ImageSize", "20x20");
        m_ImageLabel->style()->polish(m_ImageLabel);
        m_ImageLabel->update();
    }
}

void TestLabel::slot_onImageLabel40x40Btn()
{
    QString strSize = m_ImageLabel->property("ImageSize").toString();
    if (strSize != "40x40")
    {
        m_ImageLabel->setProperty("ImageSize", "40x40");
        m_ImageLabel->style()->polish(m_ImageLabel);
        m_ImageLabel->update();
    }
}

