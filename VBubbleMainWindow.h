#ifndef VBUBBLEMAINWINDOW_H
#define VBUBBLEMAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class VBubbleMainWindow; }
QT_END_NAMESPACE

class VBubbleMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    VBubbleMainWindow(QWidget *parent = nullptr);
    ~VBubbleMainWindow();

public slots:
    void bubble(QString title, QString content, int duration);
    void popup(QString title, QString content, int duration);
    void callPlugin(QString plugin, QString title, QString content, int duration);

private:
    QSystemTrayIcon m_systemTrayIcon{this};
    Ui::VBubbleMainWindow *ui;
};
#endif // VBUBBLEMAINWINDOW_H
