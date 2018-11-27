#include "rouleau.h"

Rouleau::Rouleau(const string _reference, const short _diametre)
{

}

void Rouleau::AffecterAlveoles(const int _rangee, const int _colonne)
{
    rangee=_rangee;
    colonne=_colonne;
}

void Rouleau::ObtenirLocalisation(short & _rangee, short &_colonne)
{
    _rangee=rangee;
    _colonne=colonne;
}


