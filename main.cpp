#include "VBubbleMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VBubbleMainWindow w;
    w.show();
    return a.exec();
}
