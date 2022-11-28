/********************************************************************************
** Form generated from reading UI file 'authmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHMENU_H
#define UI_AUTHMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthMenu
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QFormLayout *Auth;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *Status;
    QGridLayout *Sign;
    QSpacerItem *horizontalSpacer;
    QPushButton *SignButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *AuthMenu)
    {
        if (AuthMenu->objectName().isEmpty())
            AuthMenu->setObjectName(QString::fromUtf8("AuthMenu"));
        AuthMenu->resize(308, 349);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AuthMenu->sizePolicy().hasHeightForWidth());
        AuthMenu->setSizePolicy(sizePolicy);
        AuthMenu->setMinimumSize(QSize(308, 349));
        AuthMenu->setMaximumSize(QSize(400, 500));
        AuthMenu->setStyleSheet(QString::fromUtf8("background: rgb(29, 29, 29)"));
        centralWidget = new QWidget(AuthMenu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gadugi")});
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: silver;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        Auth = new QFormLayout();
        Auth->setSpacing(6);
        Auth->setObjectName(QString::fromUtf8("Auth"));

        verticalLayout->addLayout(Auth);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setAutoFillBackground(false);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        Status = new QLabel(centralWidget);
        Status->setObjectName(QString::fromUtf8("Status"));
        Status->setMinimumSize(QSize(0, 32));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gadugi")});
        font1.setPointSize(12);
        Status->setFont(font1);
        Status->setStyleSheet(QString::fromUtf8("color:rgba(255, 8, 8,150)"));
        Status->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Status);

        Sign = new QGridLayout();
        Sign->setSpacing(6);
        Sign->setObjectName(QString::fromUtf8("Sign"));
        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Sign->addItem(horizontalSpacer, 0, 0, 1, 1);

        SignButton = new QPushButton(centralWidget);
        SignButton->setObjectName(QString::fromUtf8("SignButton"));
        SignButton->setFont(font1);
        SignButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"\n"
""));

        Sign->addWidget(SignButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Sign->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(Sign);

        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        AuthMenu->setCentralWidget(centralWidget);

        retranslateUi(AuthMenu);

        QMetaObject::connectSlotsByName(AuthMenu);
    } // setupUi

    void retranslateUi(QMainWindow *AuthMenu)
    {
        AuthMenu->setWindowTitle(QCoreApplication::translate("AuthMenu", "AuthMenu", nullptr));
        label->setText(QCoreApplication::translate("AuthMenu", "Qt Chat", nullptr));
        radioButton->setText(QCoreApplication::translate("AuthMenu", "Sockets", nullptr));
        radioButton_2->setText(QCoreApplication::translate("AuthMenu", "Pipes", nullptr));
        Status->setText(QString());
        SignButton->setText(QCoreApplication::translate("AuthMenu", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthMenu: public Ui_AuthMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHMENU_H
