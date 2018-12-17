#ifndef MYFILE_H
#define MYFILE_H

#pragma execution_character_set("utf-8")

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QList>
#include <QMessageBox>
#include <QMenu>
//#include <QDirModel>
#include <QFileSystemModel>
//#include <QTreeWidgetItem>
#include <QSettings>

#include "datadefine.h"

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

    void slot_tree_Widget_delItem();

    void slot_tree_Widget_rename();

    void on_Btn_Save_clicked();

    void on_lineDir_Save_textChanged(const QString &arg1);

    void on_Btn_start_clicked();

    void on_treeWidget_file_customContextMenuRequested(const QPoint &pos);

    void on_treeWidget_file_itemChanged(QTreeWidgetItem *item, int column);
	void on_Btn_check_pressed();


    void on_cB_rename_stateChanged(int arg1);

    void on_cB_join_stateChanged(int arg1);

    void on_cB_move_stateChanged(int arg1);

private:
    Ui::Myfile *ui;
    //设置属性
    struct path_info
    {
        QString _open_path;
        QString _save_path;
        int _version;
    };

    QList<QTreeWidgetItem*> List_items;
	int Root_num = 0;
    path_info _setting_path_info;
	fileInfo _fileInfo;
	QVector<fileInfo> _Vec_file_Info;
    QTreeWidgetItem *item_current;
    QTreeWidgetItem *del_item;
	//菜单
	QTreeWidgetItem *current_menuItem;
	QMenu menu;
	QAction * delete_Itme;
	QAction * rename_Item;
    //------------

    int file_count ;
    void add_dir();
    void add_treeWidget_item(const QFileInfo _FileInfo, QTreeWidgetItem *_item,bool isFile );
    void add_treeWidget_file(const QDir _dir, QTreeWidgetItem *_parent_item,bool isRooot);
    void add_filo_infos(QFileInfo _fileinfo_form,QTreeWidgetItem *_my_item,bool _isRoot,int _root_num);


//析构存储
    void _save_setting_check();


};

#endif // MYFILE_H
