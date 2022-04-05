#ifndef TestLabel_H
#define TestLabel_H

#include <QWidget>

class QPushButton;
class QLabel;
class TestLabel : public QWidget
{
    Q_OBJECT

public:
    TestLabel(QWidget *parent = 0);
    ~TestLabel();

public slots:
    void slot_onTextLableLineHeight();
    void slot_onTextLableLineHeight20();
    void slot_onTextLableLineHeight40();
    void slot_onTextLableLineHeight60();
    void slot_onTextLableLineHeight80();
    void slot_onTextLabelUnderline();
    void slot_onTextLabelLineThrough();
    void slot_onTextLabelItalic();
    void slot_onTextLabelTextIndent();

    void slot_onImageLabel20x20Btn();
    void slot_onImageLabel40x40Btn();

protected:
    void paintEvent(QPaintEvent *event);
private:
    QLabel* m_TextLabel = nullptr;
    QLabel* m_ImageLabel = nullptr;
    QLabel* m_AvatarLabel = nullptr;
    QLabel* m_AvatarBorderLabel = nullptr;

    QPushButton* m_TextLabelUnderLineBtn = nullptr;
    QPushButton* m_TextLabelLineThoughBtn = nullptr;
    QPushButton* m_TextLabelItalicBtn = nullptr;
    QPushButton* m_TextLabelTextIndentBtn = nullptr;

    QPushButton* m_TextLabelLineHeightBtn = nullptr;
    QPushButton* m_TextLabelLineHeight20Btn = nullptr;
    QPushButton* m_TextLabelLineHeight40Btn = nullptr;
    QPushButton* m_TextLabelLineHeight60Btn = nullptr;
    QPushButton* m_TextLabelLineHeight80Btn = nullptr;

    QPushButton* m_ImageLabel20x20Btn = nullptr;
    QPushButton* m_ImageLabel40x40Btn = nullptr;
};

#endif // TestLabel_H
