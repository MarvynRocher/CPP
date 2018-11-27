/**
  @file rouleau.h
  @brief Déclaration de la classe rouleau
  @version 1.0
  @author Marvyn ROCHER
  @date 19/11/2018
  */


#ifndef ROULEAU_H
#define ROULEAU_H
#include <QString>
#include <vector>

using namespace std;


class Rouleau {
public:
    void AffecterAlveoles(const int _rangee, const int _colonne);
    void ObtenirLocalisation();
    void Rouleau(const string reference, const short diametre);

private:
    string reference;
    short diametre;
    short rangee;
    short colonne;

};



#endif // ROULEAU_H
