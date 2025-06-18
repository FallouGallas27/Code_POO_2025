#ifndef SALARIE_H
#define SALARIE_H
#include <iostream>

using namespace std;

class Salarie
{
private:
    string nom;
    string prenom;
public:
    Salarie(string, string);
    ~Salarie();
    string getNom()const;
    string getPrenom()const;
    void affiche();
    Salarie (const Salarie&);
    Salarie& operator=(const Salarie&);
};
#endif