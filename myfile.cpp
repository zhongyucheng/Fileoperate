#include "myfile.h"
#include "common.h"
#include "ui_myfile.h"
#include <QDebug>
#include <QFileInfo>
//#include <QStackedWidget>
#include <QAbstractItemView>

Myfile::Myfile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Myfile)
{
    ui->setupUi(this);
    QFileInfo _setting_info = QApplication::applicationDirPath() +  _CONFIG_FILE_;
    if(_setting_info.isFile())
    {
        QSettings _file_operation(QApplication::applicationDirPath() +  _CONFIG_FILE_,QSettings::IniFormat);

        _setting_path_info._version = _file_operation.value("Others/version",1).toInt();
        _setting_path_info._open_path = _file_operation.value("path_info/open_dir",QApplication::applicationDirPath()).toString();
        _setting_path_info._save_path = _file_operation.value("path_info/save_dir").toString();
        ui->lineDir->setText(_setting_path_info._open_path);
        ui->lineDir_Save->setText(_setting_path_info._save_path);
    }

    ui->label_status->setText("请选择文件夹.");

    InitTreeWidget();
    Init();
}

Myfile::~Myfile()
{

    _save_setting_check();
    delete ui;
}

void Myfile::InitTreeWidget()
{
	current_menuItem = new QTreeWidgetItem;
	delete_Itme = menu.addAction("删除该项");
	rename_Item = menu.addAction("重命名.");
	connect(delete_Itme,&QAction::triggered,this,&Myfile::slot_tree_Widget_delItem);
	connect(rename_Item,&QAction::triggered,this,&Myfile::slot_tree_Widget_rename);

}

void Myfile::Init()
{ 
	connect(ui->lineDir, SIGNAL(editingFinished()), this, SLOT(path_check()));
	//ui->stackedWidget->currentIndex();
	ui->stackedWidget->setCurrentIndex(1);
	
}
void Myfile::updateParentItem(QTreeWidgetItem *item)
{

    QTreeWidgetItem* parent=item->parent();
    if(parent==nullptr)
    {
        return;
    }
    //选中的子节点个数
    int selectCount=0;
    int childCount=parent->childCount();
    for(int i=0;i<childCount;i++)
    {
        QTreeWidgetItem *childItem=parent->child(i);
        if(childItem->checkState(0)==Qt::Checked)
        {
            selectCount++;
        }
    }
    if(selectCount<=0)
    {
        //选中状态
        parent->setCheckState(0,Qt::Unchecked);
    }
    else if(selectCount>0 && selectCount<childCount)
    {
        //部分选中状态
        parent->setCheckState(0,Qt::PartiallyChecked);
    }
    else if(selectCount==childCount)
    {
        //未选中状态
        parent->setCheckState(0,Qt::Checked);
    }

}



void Myfile::click_treeitem()
{



}



void Myfile::slot_tree_Widget_delItem()
{
	qDebug() << current_menuItem;
    ui->treeWidget_file->removeItemWidget(current_menuItem,0);

	//_Vec_file_Info.removeAt(List_items.indexOf(current_menuItem));
	//List_items.removeAt(List_items.indexOf(current_menuItem));
    delete current_menuItem;


}

void Myfile::slot_tree_Widget_rename()
{
	qDebug() << "重命名";
}



void Myfile::on_Btn_open_clicked()
{
    dir = QFileDialog::getExistingDirectory(this,tr("请选择目录"),INIT_PATH,QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
    ui->lineDir->setText(dir);
    ui->label_status->setText(tr("待扫描."));
    ui->Btn_snap->setEnabled(true);
}

void Myfile::on_Btn_snap_clicked()
{
    path = ui->lineDir->text();
    if(!path.exists())
    {
        QMessageBox::warning(this,"警告.","文件路径不存在.",tr("好的."));
        return;
    }
    else {
        ui->label_status->setText(tr("扫描中…………."));
		ui->treeWidget_file->clear();
		List_items.clear();
		_Vec_file_Info.clear();
        file_count =0;
        add_treeWidget_file(path,nullptr,true);
        ui->label_status->setText(tr("扫描完毕！"));
    }
    /*
QMessageBox message(QMessageBox::NoIcon, "Title", "Content with icon.");
message.setIconPixmap(QPixmap("icon.png"));
message.exec();
*/
}

void Myfile::add_dir()
{

}



void Myfile::add_treeWidget_item(const QFileInfo _FileInfo, QTreeWidgetItem *_item , bool isFile)
{
    qint64 file_size = _FileInfo.size();
	QString str_file_size("");
	
    //_item->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable);
    _item->setCheckState(0,Qt::Unchecked);
    _item->setText(0,_FileInfo.fileName());

	

    if(isFile)
    {
		if (file_size > 1024)
		{
			file_size /= 1024;
			str_file_size = tr("%1%2").arg(file_size).arg("k");
		}
		if (file_size > 1024)
		{
			file_size /= 1024;
			str_file_size = tr("%1%2").arg(file_size).arg("M");
		}if (file_size > 1024)
		{
			str_file_size = tr("%1%2%3%4").arg(file_size/1024).arg(".").arg(file_size%1024).arg("G");
		}
        _item->setText(1,_FileInfo.suffix());
        _item->setText(2,str_file_size);
    }else
    {
        _item->setText(1,"目录");

    }
}



void Myfile::add_treeWidget_file(const QDir _dir,  QTreeWidgetItem *_parent_item, bool isRooot)
{
    file_count++;
    QFileInfoList list=_dir.entryInfoList();
    if(list.size()!=2)
    {
        list = list.mid(2,-1);
        qDebug()<<file_count<<": "<<list.size();
        for(int i=0;i<list.length();i++)
        {
            QFileInfo fileinfo=list.at(i);

            QTreeWidgetItem *_item;
            if(fileinfo.isFile())
            {
                if(_parent_item != nullptr)
                {
                    Root_num ++;
                    _item =new QTreeWidgetItem(_parent_item);
                    add_treeWidget_item(fileinfo,_item,true);
                    add_filo_infos(fileinfo,_item, false, Root_num);
                    List_items.append(_item);

                }else
                {
                    Root_num = 1;
                    _item=new QTreeWidgetItem(ui->treeWidget_file);
                    add_treeWidget_item(fileinfo,_item,true);
                    add_filo_infos(fileinfo, _item, true, Root_num);
                    List_items.append(_item);
                }

            }else if(fileinfo.isDir())
            {
                if(isRooot)
                {
                    Root_num = 1;
                    _item = new QTreeWidgetItem(ui->treeWidget_file);
                    add_treeWidget_item(fileinfo,_item,false);
                    add_treeWidget_file(fileinfo.absoluteFilePath(),_item,false);
                    add_filo_infos(fileinfo, _item, true, Root_num);
                    List_items.append(_item);
                }else
                {
                    Root_num++;
                    _item = new QTreeWidgetItem(_parent_item);
                    add_treeWidget_item(fileinfo,_item,false);
                    add_treeWidget_file(fileinfo.absoluteFilePath(),_item,false);
                    add_filo_infos(fileinfo, _item, false, Root_num);
                    List_items.append(_item);
                }
            }
        }
    }

}

void Myfile::add_filo_infos(QFileInfo _fileinfo_form, QTreeWidgetItem * _my_item, bool _isRoot, int _root_num)
{
	_fileInfo._form_fileinfo = _fileinfo_form;
    _fileInfo._QtreeWidgetItem = _my_item;
	_fileInfo._isRoot = _isRoot;
	_fileInfo._root_num = _root_num;
	_Vec_file_Info.append(_fileInfo);
}

void Myfile::_save_setting_check()
{
    QSettings _file_operation(QApplication::applicationDirPath() +  _CONFIG_FILE_,QSettings::IniFormat);
    QDir _temp_dir = ui->lineDir->text();

    _file_operation.beginGroup("path_info");
    if(_temp_dir.exists())
    {
        _file_operation.setValue("open_dir",_temp_dir.absolutePath());
    }
    _temp_dir = ui->lineDir_Save->text();
    if(_temp_dir.exists())
    {
        _file_operation.setValue("save_dir",_temp_dir.absolutePath());
    }
    _file_operation.endGroup();
    _file_operation.beginGroup("Others");
    _file_operation.setValue("version",0.1);
    _file_operation.endGroup();
}


void Myfile::path_check()
{
    path = ui->lineDir->text();
    if(!path.exists())
        ui->label_status->setText(tr("路径不合法,请重新选择"));
    else
        {
        ui->label_status->setText(tr("路径合法,带扫描."));
        ui->Btn_snap->setEnabled(true);
        }


}



void Myfile::on_Btn_Save_clicked()
{
    QString save_dir = QFileDialog::getExistingDirectory(this,tr("请选择目录"),INIT_PATH,QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);

    ui->lineDir_Save->setText(save_dir);
}

void Myfile::on_lineDir_Save_textChanged(const QString &arg1)
{
    QDir _save_dir(arg1);
    if(!_save_dir.exists())
    {
        ui->lineDir_Save->setText(arg1);
    }else
    {
        ui->label_save_status->setText(QString("路径不存在请重新编辑"));
    }
}

void Myfile::on_Btn_start_clicked()
{

}

void Myfile::on_treeWidget_file_customContextMenuRequested(const QPoint &pos)
{
	current_menuItem = ui->treeWidget_file->currentItem();
    if(!current_menuItem){return;}
	menu.exec(QCursor::pos());
}

void Myfile::on_treeWidget_file_itemChanged(QTreeWidgetItem *item, int column)
{
    QString itemText=item->text(0);
    //选中时
    if(Qt::Checked==item->checkState(0))
    {
        //QTreeWidgetItem* parent=item->parent();
        int count=item->childCount();
        if(count>0)
        {
            for(int i=0;i<count;i++)
            {
                //子节点也被选中
                item->child(i)->setCheckState(0,Qt::Checked);
            }
        }
        else
        {
            //是子节点
            updateParentItem(item);
        }
    }
    else if(Qt::Unchecked==item->checkState(0))
    {
        int count=item->childCount();
        if(count>0)
        {
            for(int i=0;i<count;i++)
            {
                item->child(i)->setCheckState(0,Qt::Unchecked);
            }
        }
        else
        {
            //是子节点
            updateParentItem(item);
        }

    }
}

void Myfile::on_Btn_check_pressed()
{
	QList<QTreeWidgetItem*> selected_items ;
	int List_size = List_items.size();
	for (int coulum = 0; coulum < List_size; coulum++)
	{
		if (List_items.at(coulum)->checkState(0) == Qt::Checked)
		{
			selected_items.append(List_items.at(coulum));
		}
	}
	int current_clolun = 0;
	for (;current_clolun<selected_items.size();current_clolun++)
	{
        int find_item = List_items.indexOf(selected_items.at(current_clolun));
        qDebug() << _Vec_file_Info.at(find_item)._form_fileinfo.fileName() << ": " << _Vec_file_Info.at(find_item)._form_fileinfo.absoluteFilePath();
	}
}


void Myfile::on_cB_rename_stateChanged(int arg1)
{
	
}

void Myfile::on_cB_join_stateChanged(int arg1)
{

}

void Myfile::on_cB_move_stateChanged(int arg1)
{

}
