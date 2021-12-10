/*
 * @Author: OhtoAi
 * @Date: 2021-12-10 02:00:52
 * @LastEditors: OhtoAi
 * @LastEditTime: 2021-12-11 01:22:10
 * @Description: file content
 */
#ifndef VBUBBLEMAINWINDOW_H
#define VBUBBLEMAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class VBubbleMainWindow; }
QT_END_NAMESPACE

struct BubbleMessage
{
    QString title = "vbubble";
    QString message = "This is a message!";
    QSystemTrayIcon::MessageIcon systemTrayIcon = QSystemTrayIcon::Information;
    int millisecondsTimeoutHint = 1000;
};


class VBubbleMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    VBubbleMainWindow(QWidget *parent = nullptr);
    ~VBubbleMainWindow();

public slots:
    void bubble(BubbleMessage message);
    void popup(BubbleMessage message);
    void callPlugin(QString plugin, BubbleMessage message);

private:
    QSystemTrayIcon m_systemTrayIcon{this};
    Ui::VBubbleMainWindow *ui;
};
#endif // VBUBBLEMAINWINDOW_H
