#include <QWidget>
#include <QString>
#include <set>
#include "rouleau.h"

typedef multiset<Rouleau*> MULTISET_ROULEAU; //héritage de la classe conteneur, en défissant un nouveau type de données.
#ifndef STOCK_H
#define STOCK_H

using namespace std;

namespace Ui {
class stock;
}

class stock : public QWidget
{
    Q_OBJECT

public:
    explicit stock(QWidget *parent = 0);
    ~stock();
    void AjouterRouleau(const Rouleau nouveau);
   // short RechercherSerie(const int positionDebut);
   // void SortirRouleau(const int positionRouleau);

private:
    Ui::stock *ui;
    string reference;
    short diametre;
    short rangee;
    short colonne;
};

#endif // STOCK_H
