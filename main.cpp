#include "myfile.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationName("Zhongyucheng");
    QApplication::setApplicationName("fileoperation");
    Myfile w;
    w.show();

    return a.exec();
}
