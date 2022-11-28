#include "authmenu.h"
#include "ui_authmenu.h"
#include <qDebug>
#include <QRegularExpression>


AuthMenu::AuthMenu(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::AuthMenu)
{
    ui->setupUi(this);
}

AuthMenu::~AuthMenu()
{
    delete ui;
}


void
AuthMenu::on_SignButton_clicked()
{
    auto login = "";
    auto password = "";
    auto forbiddenCharacters = new QRegularExpression("[^a-zA-Z0-9]");

    // Disable all buttons while making request to server
    ui->SignButton->setEnabled(false);


    // Show preloader gif until server response is catched
    auto preloader = new QMovie(":/Image/46.gif");
    preloader->start();
    ui->Status->setMovie(preloader);

    // Send signal with login and pass data
    // to network handler
    emit signIn(login, password);
}



void
AuthMenu::setStatus(const QString &status)
{
    ui->Status->setText(status);
    ui->SignButton->setEnabled(true);
}



void
AuthMenu::on_Login_returnPressed()
{
    on_SignButton_clicked();
}
