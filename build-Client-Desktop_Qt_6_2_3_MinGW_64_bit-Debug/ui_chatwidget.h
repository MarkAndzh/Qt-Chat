/********************************************************************************
** Form generated from reading UI file 'chatwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET_H
#define UI_CHATWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWidget
{
public:
    QAction *actionTheme;
    QAction *actionSelect_color;
    QAction *actionStyle;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *Users;
    QVBoxLayout *verticalLayout_3;
    QListWidget *Dialog_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *MessageLine;
    QPushButton *SendButton;
    QPushButton *loadImageButton;
    QLabel *LoadedImages;
    QMenuBar *menubar;
    QMenu *menuSettings;

    void setupUi(QMainWindow *ChatWidget)
    {
        if (ChatWidget->objectName().isEmpty())
            ChatWidget->setObjectName(QString::fromUtf8("ChatWidget"));
        ChatWidget->resize(911, 587);
        ChatWidget->setStyleSheet(QString::fromUtf8("background: rgb(28, 28, 28);\n"
"\n"
""));
        actionTheme = new QAction(ChatWidget);
        actionTheme->setObjectName(QString::fromUtf8("actionTheme"));
        actionTheme->setShortcutContext(Qt::WindowShortcut);
        actionSelect_color = new QAction(ChatWidget);
        actionSelect_color->setObjectName(QString::fromUtf8("actionSelect_color"));
        actionStyle = new QAction(ChatWidget);
        actionStyle->setObjectName(QString::fromUtf8("actionStyle"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gadugi")});
        font.setPointSize(12);
        actionStyle->setFont(font);
        centralwidget = new QWidget(ChatWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QListWidget::item:selected {\n"
"	background: none;\n"
"	color: none;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"	background: none;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: silver;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        Users = new QListWidget(centralwidget);
        Users->setObjectName(QString::fromUtf8("Users"));
        Users->setMinimumSize(QSize(200, 0));
        Users->setStyleSheet(QString::fromUtf8("color: silver;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(52, 52, 52);\n"
"padding: 2px;"));
        Users->setFrameShape(QFrame::Panel);

        verticalLayout_2->addWidget(Users);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Dialog_2 = new QListWidget(centralwidget);
        Dialog_2->setObjectName(QString::fromUtf8("Dialog_2"));
        Dialog_2->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 23, 23)"));
        Dialog_2->setFrameShape(QFrame::Panel);
        Dialog_2->setResizeMode(QListView::Adjust);
        Dialog_2->setBatchSize(100);
        Dialog_2->setWordWrap(true);

        verticalLayout_3->addWidget(Dialog_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        MessageLine = new QTextEdit(centralwidget);
        MessageLine->setObjectName(QString::fromUtf8("MessageLine"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MessageLine->sizePolicy().hasHeightForWidth());
        MessageLine->setSizePolicy(sizePolicy);
        MessageLine->setMinimumSize(QSize(556, 61));
        MessageLine->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica")});
        font1.setPointSize(11);
        MessageLine->setFont(font1);
        MessageLine->setStyleSheet(QString::fromUtf8("color: silver;\n"
"selection-color: none;\n"
"\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(52, 52, 52);\n"
"padding: 2px;"));
        MessageLine->setFrameShape(QFrame::Panel);

        horizontalLayout_2->addWidget(MessageLine);

        SendButton = new QPushButton(centralwidget);
        SendButton->setObjectName(QString::fromUtf8("SendButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SendButton->sizePolicy().hasHeightForWidth());
        SendButton->setSizePolicy(sizePolicy1);
        SendButton->setMinimumSize(QSize(81, 61));
        SendButton->setMaximumSize(QSize(81, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gadugi")});
        font2.setPointSize(12);
        font2.setBold(true);
        SendButton->setFont(font2);
        SendButton->setCursor(QCursor(Qt::PointingHandCursor));
        SendButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: silver;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(52, 52, 52);\n"
"padding: 4px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"padding: 2px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(SendButton);

        loadImageButton = new QPushButton(centralwidget);
        loadImageButton->setObjectName(QString::fromUtf8("loadImageButton"));
        loadImageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(\":/Image/attach.png\");\n"
"background: none;\n"
"outline:none;\n"
"border:none;\n"
"width: 32px;\n"
"height: 48px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(loadImageButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        LoadedImages = new QLabel(centralwidget);
        LoadedImages->setObjectName(QString::fromUtf8("LoadedImages"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Gadugi")});
        font3.setPointSize(10);
        LoadedImages->setFont(font3);
        LoadedImages->setStyleSheet(QString::fromUtf8("color:silver;"));

        verticalLayout_3->addWidget(LoadedImages);


        horizontalLayout_3->addLayout(verticalLayout_3);

        ChatWidget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatWidget);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 911, 25));
        menubar->setFont(font);
        menubar->setStyleSheet(QString::fromUtf8("color:silver;"));
        menubar->setNativeMenuBar(true);
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuSettings->setFont(font);
        menuSettings->setStyleSheet(QString::fromUtf8("color:silver;"));
        ChatWidget->setMenuBar(menubar);

        menubar->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionStyle);

        retranslateUi(ChatWidget);

        QMetaObject::connectSlotsByName(ChatWidget);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWidget)
    {
        ChatWidget->setWindowTitle(QCoreApplication::translate("ChatWidget", "MainWindow", nullptr));
        actionTheme->setText(QCoreApplication::translate("ChatWidget", "Theme", nullptr));
        actionSelect_color->setText(QCoreApplication::translate("ChatWidget", "Select color", nullptr));
        actionStyle->setText(QCoreApplication::translate("ChatWidget", "Style", nullptr));
        label->setText(QCoreApplication::translate("ChatWidget", "Users online", nullptr));
        MessageLine->setHtml(QCoreApplication::translate("ChatWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        SendButton->setText(QCoreApplication::translate("ChatWidget", "Send", nullptr));
        loadImageButton->setText(QString());
        LoadedImages->setText(QCoreApplication::translate("ChatWidget", "Selected images:", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("ChatWidget", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWidget: public Ui_ChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET_H
