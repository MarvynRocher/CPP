#ifndef STOCK_H
#define STOCK_H

#include <QString>
#include <vector>

using namespace std;


class Stock {
public:
    void AffecterAlveole(const short _rangee, const short _colonne);
    void ObtenirLocalisation(short &_rangee, const & _colonne);
    void Rouleau(const string reference, const short diametre);
private:
    string reference;
    short diametre;
    short rangee;
    short colonne;

};



#endif // STOCK_H
