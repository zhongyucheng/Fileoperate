#ifndef DATADEFINE_H
#define DATADEFINE_H




#include <QFileInfo>
#include <QTreeWidgetItem>

struct fileInfo
{
    QFileInfo _form_fileinfo;
    QTreeWidgetItem *_QtreeWidgetItem;
    bool _isRoot =false;
    unsigned short int _root_num = 0;
};

#endif // DATADEFINE_H
