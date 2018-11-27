#include <QString>
#include <vector>
#ifndef ROULEAU_H
#define ROULEAU_H

using namespace std;

class Rouleau {
public:
    void AffecterAlveoles(const int _rangee, const int _colonne);
    void ObtenirLocalisation(short & _rangee, short & _colonne);


private:
    string reference;
    short diametre;
    short rangee;
    short colonne;
    Rouleau *lesRouleaux;

};

#endif // ROULEAU_H
