#include "VBubbleMainWindow.h"
#include "ui_VBubbleMain.h"

VBubbleMainWindow::VBubbleMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VBubbleMainWindow)
{
    ui->setupUi(this);

}

VBubbleMainWindow::~VBubbleMainWindow()
{
    delete ui;
}

void VBubbleMainWindow::bubble(QString title, QString content, int duration)
{
    // todo: impl
}

void VBubbleMainWindow::popup(QString title, QString content, int duration)
{
    // todo: impl
}

void VBubbleMainWindow::callPlugin(QString plugin, QString title, QString content, int duration)
{
    // todo: impl
}

