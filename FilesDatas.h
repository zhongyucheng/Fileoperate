#ifndef FILESDATAS_H
#define FILESDATAS_H



#include <QDomComment>
#include <QVector>
#include "datadefine.h"
class Filedatas
{

    explicit Filedatas();
    ~Filedatas();

public:

    struct File_infos
    {
        short int Root_deep = 0;
        QVector<fileInfo> file_info;

    };


    void Save_fileinfo_Loacal();
    void Read_fileinfo_Loacal();

};

#endif // FILESDATAS_H
