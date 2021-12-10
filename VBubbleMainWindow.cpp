/*
 * @Author: OhtoAi
 * @Date: 2021-12-10 02:00:52
 * @LastEditors: OhtoAi
 * @LastEditTime: 2021-12-11 01:53:45
 * @Description: file content
 */
#include "VBubbleMainWindow.h"
#include "ui_VBubbleMain.h"
#include <QDesktopServices>
#include <QUrl>

VBubbleMainWindow::VBubbleMainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::VBubbleMainWindow)
{
    ui->setupUi(this);
    connect(ui->actionBubble, &QAction::triggered, [this]
            { bubble(BubbleMessage{}); });

    QMenu *menu = new QMenu;

    menu->addAction("About", []
                    { QDesktopServices::openUrl(QUrl(QString("https://ohtoai.top/"))); ; });
    menu->addAction("Quit", [this]
                    { close(); });

    m_systemTrayIcon.setContextMenu(menu);

    m_systemTrayIcon.setIcon(QIcon(":/icon/bubble"));
    m_systemTrayIcon.show();
}

VBubbleMainWindow::~VBubbleMainWindow()
{
    delete ui;
}

void VBubbleMainWindow::bubble(BubbleMessage message)
{
    m_systemTrayIcon.showMessage(message.title, message.message, message.systemTrayIcon, message.millisecondsTimeoutHint);
}

void VBubbleMainWindow::popup(BubbleMessage message)
{
    // todo: impl
}

void VBubbleMainWindow::callPlugin(QString plugin, BubbleMessage message)
{
    // todo: impl
}
