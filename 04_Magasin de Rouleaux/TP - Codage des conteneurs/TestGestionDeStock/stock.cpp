#include "stock.h"
#include "ui_stock.h"

stock::stock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stock)
{
    ui->setupUi(this);
}

stock::~stock()
{
    delete ui;
}


stock::AjouterRouleau(const Rouleau nouveau)
{
    Rouleau *nouveau;
    nouveau = new Rouleau ;



}

stock::onPushButtonNouveau_clicked()
{
    AjouterRouleau();

}
