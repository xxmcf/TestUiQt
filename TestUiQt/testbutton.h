#ifndef TestButton_H
#define TestButton_H

#include <QWidget>

class QPushButton;
class TestButton : public QWidget
{
    Q_OBJECT

public:
    TestButton(QWidget *parent = 0);
    ~TestButton();

public slots:
    void slot_onWhiteBtnClicked();
    void slot_onWhiteCtlBtnClicked(bool checked);
    void slot_onWhiteFont12BtnClicked();
    void slot_onWhiteFont14BtnClicked();
    void slot_onWhiteFont16BtnClicked();
    void slot_onWhiteFont18BtnClicked();

    void slot_onBlueBtnClicked();
    void slot_onBlueCtlBtnClicked(bool checked);
    void slot_onBlueFont12BtnClicked();
    void slot_onBlueFont14BtnClicked();
    void slot_onBlueFont16BtnClicked();
    void slot_onBlueFont18BtnClicked();

private:
    QPushButton *m_WhiteBtn = nullptr;
    QPushButton *m_WhiteCtlBtn = nullptr;
    QPushButton *m_WhiteFont12Btn = nullptr;
    QPushButton *m_WhiteFont14Btn = nullptr;
    QPushButton *m_WhiteFont16Btn = nullptr;
    QPushButton *m_WhiteFont18Btn = nullptr;

    QPushButton *m_BlueBtn = nullptr;
    QPushButton *m_BlueCtlBtn = nullptr;
    QPushButton *m_BlueFont12Btn = nullptr;
    QPushButton *m_BlueFont14Btn = nullptr;
    QPushButton *m_BlueFont16Btn = nullptr;
    QPushButton *m_BlueFont18Btn = nullptr;
};

#endif // TestButton_H
