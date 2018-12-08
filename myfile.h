#ifndef MYFILE_H
#define MYFILE_H

#pragma execution_character_set("utf-8")

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QList>
#include <QMessageBox>
#include <QFileInfo>
//#include <QDirModel>
#include <QFileSystemModel>
#include <QTreeWidgetItem>
#include <QSettings>

#define _CONFIG_FILE_			"/config.ini"

namespace Ui {
class Myfile;
}

class Myfile : public QMainWindow
{
    Q_OBJECT

public:
    explicit Myfile(QWidget *parent = nullptr);
    ~Myfile();

protected:
    void InitTreeWidget();
    void Init();
    void updateParentItem(QTreeWidgetItem *item);

    QString dir;
    QDir path;
private slots:
    void on_Btn_open_clicked();

    void on_Btn_snap_clicked();

    void path_check();

    void click_treeitem();


    void tree_Widget_menu(const QPoint& pt_menu);

    void tree_Widget_delItem();
    void tree_Widget_rename();

    void slot_test(const QPoint& pt_test);

    void on_Btn_Save_clicked();

    void on_lineDir_Save_textChanged(const QString &arg1);

    void on_Btn_start_clicked();

    void on_treeWidget_file_customContextMenuRequested(const QPoint &pos);

    void on_treeWidget_file_itemChanged(QTreeWidgetItem *item, int column);

private:
    Ui::Myfile *ui;
    //设置属性
    struct path_info
    {
        QString _open_path;
        QString _save_path;
        int _version;
    };
    struct fileInfo
    {
        QFileInfo form_fileinfo;
        QTreeWidgetItem *_parent;
        bool isRoot;
    };
    path_info _setting_path_info;

    QTreeWidgetItem *item_std_model;
    QTreeWidgetItem *item_current;
    QTreeWidgetItem *del_item;

    //------------

    void add_dir();
    void add_treeWidget_item(const QFileInfo _FileInfo, QTreeWidgetItem *_item,bool isFile );

    void add_treeWidget_file(const QDir _dir, QTreeWidgetItem *_parent_item,bool isRooot);


//析构存储
    void _save_setting_check();


};

#endif // MYFILE_H
