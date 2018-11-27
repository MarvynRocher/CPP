#include <QCoreApplication>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        vector <int> tableau;
        cout << setfill('0');
        for(int indice=0 ; indice<30; indice++){
            tableau.push_back(indice);
            cout << "Nb d'éléments : " << setw(2) << tableau.size();
            cout << "-- Capacité : " << setw(2) << tableau.capacity() << endl;
    }
        cout << endl;

        //retrait d'un élément à la fin du tableau
        tableau.pop_back();
        cout << "Nb d'éléments : "<< setw(2) << tableau.size();
        cout << "-- Capacité : "<< setw(2) << tableau.capacity() << endl ;

        //retrait d'un élément au début du tableau
        cout << "Nb d'éléments : "<< setw(2) << tableau.size();
        cout << "-- Capacité : "<< setw(2) << tableau.capacity() << endl ;

    return a.exec();
}
