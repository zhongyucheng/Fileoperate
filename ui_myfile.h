/********************************************************************************
** Form generated from reading UI file 'myfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFILE_H
#define UI_MYFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Myfile
{
public:
    QAction *action_O;
    QWidget *centralWidget;
    QLineEdit *lineDir;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineDir_Save;
    QPushButton *Btn_Save;
    QPushButton *Btn_start;
    QLabel *label_status;
    QTreeWidget *treeWidget_file;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *dir_line;
    QPushButton *Btn_fileter;
    QLabel *label_save_status;
    QPushButton *Btn_check;
    QProgressBar *progressBar;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *Btn_open;
    QPushButton *Btn_snap;
    QPushButton *Btn_check_3;
    QGroupBox *groupBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *Btn_check_2;
    QWidget *page_2;
    QComboBox *comboBox;
    QCheckBox *cB_rename;
    QCheckBox *cB_move;
    QCheckBox *cB_join;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *line_rename;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_F2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Myfile)
    {
        if (Myfile->objectName().isEmpty())
            Myfile->setObjectName(QString::fromUtf8("Myfile"));
        Myfile->resize(961, 560);
        Myfile->setMouseTracking(false);
        action_O = new QAction(Myfile);
        action_O->setObjectName(QString::fromUtf8("action_O"));
        centralWidget = new QWidget(Myfile);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineDir = new QLineEdit(centralWidget);
        lineDir->setObjectName(QString::fromUtf8("lineDir"));
        lineDir->setGeometry(QRect(530, 30, 300, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 30, 71, 30));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 90, 71, 30));
        lineDir_Save = new QLineEdit(centralWidget);
        lineDir_Save->setObjectName(QString::fromUtf8("lineDir_Save"));
        lineDir_Save->setGeometry(QRect(530, 90, 300, 20));
        Btn_Save = new QPushButton(centralWidget);
        Btn_Save->setObjectName(QString::fromUtf8("Btn_Save"));
        Btn_Save->setGeometry(QRect(850, 90, 75, 23));
        Btn_start = new QPushButton(centralWidget);
        Btn_start->setObjectName(QString::fromUtf8("Btn_start"));
        Btn_start->setGeometry(QRect(830, 150, 71, 81));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(520, 0, 351, 31));
        treeWidget_file = new QTreeWidget(centralWidget);
        treeWidget_file->setObjectName(QString::fromUtf8("treeWidget_file"));
        treeWidget_file->setGeometry(QRect(0, 0, 431, 431));
        treeWidget_file->setContextMenuPolicy(Qt::CustomContextMenu);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 450, 440, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(71, 30));
        label_3->setMaximumSize(QSize(71, 30));

        horizontalLayout->addWidget(label_3);

        dir_line = new QLineEdit(layoutWidget);
        dir_line->setObjectName(QString::fromUtf8("dir_line"));
        dir_line->setMinimumSize(QSize(113, 20));
        dir_line->setMaximumSize(QSize(113, 20));

        horizontalLayout->addWidget(dir_line);

        Btn_fileter = new QPushButton(layoutWidget);
        Btn_fileter->setObjectName(QString::fromUtf8("Btn_fileter"));

        horizontalLayout->addWidget(Btn_fileter);

        label_save_status = new QLabel(centralWidget);
        label_save_status->setObjectName(QString::fromUtf8("label_save_status"));
        label_save_status->setGeometry(QRect(530, 70, 291, 16));
        Btn_check = new QPushButton(centralWidget);
        Btn_check->setObjectName(QString::fromUtf8("Btn_check"));
        Btn_check->setGeometry(QRect(830, 360, 91, 31));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(500, 130, 118, 23));
        progressBar->setValue(0);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 130, 71, 30));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(850, 30, 77, 54));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Btn_open = new QPushButton(layoutWidget1);
        Btn_open->setObjectName(QString::fromUtf8("Btn_open"));

        verticalLayout->addWidget(Btn_open);

        Btn_snap = new QPushButton(layoutWidget1);
        Btn_snap->setObjectName(QString::fromUtf8("Btn_snap"));

        verticalLayout->addWidget(Btn_snap);

        Btn_check_3 = new QPushButton(centralWidget);
        Btn_check_3->setObjectName(QString::fromUtf8("Btn_check_3"));
        Btn_check_3->setGeometry(QRect(680, 160, 91, 31));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(439, 200, 351, 211));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 20, 301, 161));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        Btn_check_2 = new QPushButton(page);
        Btn_check_2->setObjectName(QString::fromUtf8("Btn_check_2"));
        Btn_check_2->setGeometry(QRect(190, 80, 91, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        comboBox = new QComboBox(page_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 60, 111, 31));
        cB_rename = new QCheckBox(page_2);
        cB_rename->setObjectName(QString::fromUtf8("cB_rename"));
        cB_rename->setGeometry(QRect(170, 60, 91, 31));
        cB_move = new QCheckBox(page_2);
        cB_move->setObjectName(QString::fromUtf8("cB_move"));
        cB_move->setGeometry(QRect(170, 110, 91, 31));
        cB_join = new QCheckBox(page_2);
        cB_join->setObjectName(QString::fromUtf8("cB_join"));
        cB_join->setGeometry(QRect(30, 110, 91, 31));
        layoutWidget2 = new QWidget(page_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 281, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(71, 30));
        label_4->setMaximumSize(QSize(71, 30));

        horizontalLayout_2->addWidget(label_4);

        line_rename = new QLineEdit(layoutWidget2);
        line_rename->setObjectName(QString::fromUtf8("line_rename"));

        horizontalLayout_2->addWidget(line_rename);

        stackedWidget->addWidget(page_2);
        Myfile->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        lineDir->raise();
        label->raise();
        label_2->raise();
        lineDir_Save->raise();
        Btn_Save->raise();
        Btn_start->raise();
        label_status->raise();
        treeWidget_file->raise();
        label_save_status->raise();
        Btn_check->raise();
        progressBar->raise();
        label_5->raise();
        Btn_check_3->raise();
        groupBox->raise();
        menuBar = new QMenuBar(Myfile);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_F2 = new QMenu(menuBar);
        menu_F2->setObjectName(QString::fromUtf8("menu_F2"));
        Myfile->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Myfile);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Myfile->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Myfile);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Myfile->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_F2->menuAction());
        menu->addAction(action_O);

        retranslateUi(Myfile);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Myfile);
    } // setupUi

    void retranslateUi(QMainWindow *Myfile)
    {
        Myfile->setWindowTitle(QApplication::translate("Myfile", "\346\226\207\344\273\266\346\223\215\344\275\234", nullptr));
        action_O->setText(QApplication::translate("Myfile", "\346\211\223\345\274\200(&O)", nullptr));
        label->setText(QApplication::translate("Myfile", "\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", nullptr));
        label_2->setText(QApplication::translate("Myfile", "\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        Btn_Save->setText(QApplication::translate("Myfile", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        Btn_start->setText(QApplication::translate("Myfile", "\345\274\200\345\247\213", nullptr));
        label_status->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_file->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("Myfile", "\344\277\256\346\224\271\346\227\245\346\234\237", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("Myfile", "\345\244\247\345\260\217", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("Myfile", "\347\261\273\345\236\213", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("Myfile", "\345\220\215\347\247\260", "\346\226\207\344\273\266\345\220\215\347\247\260"));
        label_3->setText(QApplication::translate("Myfile", "\350\277\207\346\273\244\347\261\273\345\236\213", nullptr));
        Btn_fileter->setText(QApplication::translate("Myfile", "\346\267\273\345\212\240\350\277\207\346\273\244\347\261\273\345\236\213", nullptr));
        label_save_status->setText(QString());
        Btn_check->setText(QApplication::translate("Myfile", "\346\237\245\347\234\213\346\226\207\344\273\266\344\277\241\346\201\257", nullptr));
        label_5->setText(QApplication::translate("Myfile", "\346\223\215\344\275\234\350\277\233\345\272\246", nullptr));
        Btn_open->setText(QApplication::translate("Myfile", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        Btn_snap->setText(QApplication::translate("Myfile", "\346\211\253\346\217\217\346\226\207\344\273\266\345\244\271", nullptr));
        Btn_check_3->setText(QApplication::translate("Myfile", "\346\237\245\347\234\213\346\226\207\344\273\266\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QApplication::translate("Myfile", "\345\277\253\346\215\267\345\212\237\350\203\275", nullptr));
        Btn_check_2->setText(QApplication::translate("Myfile", "\346\237\245\347\234\213\346\226\207\344\273\266\344\277\241\346\201\257", nullptr));
        comboBox->setItemText(0, QApplication::translate("Myfile", "\350\207\252\345\256\232\344\271\211\345\221\275\345\220\215\350\247\204\345\210\231", nullptr));
        comboBox->setItemText(1, QApplication::translate("Myfile", "\346\240\271\346\215\256\347\210\266\347\233\256\345\275\225\351\207\215\345\221\275\345\220\215", nullptr));
        comboBox->setItemText(2, QApplication::translate("Myfile", "\345\220\215\347\247\260\347\262\276\347\256\200", nullptr));
        comboBox->setItemText(3, QString());
        comboBox->setItemText(4, QString());

        cB_rename->setText(QApplication::translate("Myfile", "\346\211\271\351\207\217\351\207\215\345\221\275\345\220\215", nullptr));
        cB_move->setText(QApplication::translate("Myfile", "\346\211\271\351\207\217\347\247\273\345\212\250\346\225\264\347\220\206", nullptr));
        cB_join->setText(QApplication::translate("Myfile", "\346\226\207\344\273\266\345\220\210\345\271\266", nullptr));
        label_4->setText(QApplication::translate("Myfile", "\350\207\252\345\256\232\344\271\211\350\247\204\345\210\231\357\274\232", nullptr));
        menu->setTitle(QApplication::translate("Myfile", "\346\226\207\344\273\266\345\244\271", nullptr));
        menu_F2->setTitle(QApplication::translate("Myfile", "\350\256\276\347\275\256(&F)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Myfile: public Ui_Myfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFILE_H
