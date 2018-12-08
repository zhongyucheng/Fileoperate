#ifndef FILESDATAS_H
#define FILESDATAS_H

#endif // FILESDATAS_H

#include <QDomComment>
#include <QVector>
#include <QFileInfo>

class Filedatas
{

    explicit Filedatas();
    ~Filedatas();

public:

    struct File_infos
    {
        short int Root_deep = 0;
        QVector<QFileInfo> file_info;

    };


    void Save_fileinfo_Loacal();
    void Read_fileinfo_Loacal();

};
