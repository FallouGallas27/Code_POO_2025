#include<iostream>
using namespace std;
#ifndef CERCLE_H
#define CERCLE_H

struct Centre {
    unsigned int x;
    unsigned int y;
};

class Cercle {
private:
    unsigned int rayon;
    Centre centre;

public:
    // Constructeur
    Cercle(unsigned int r = 0, unsigned int x = 0, unsigned int y = 0);

    // Accesseurs
    unsigned int GetRayon() const;
    Centre GetCentre() const;

    // Méthodes
    unsigned int perimetre() const;
    float surface() const;

    // Mutateurs
    void SetRayon(unsigned int r);
    void SetCentre(Centre c);

    // Comparaison
    bool Compare(const Cercle& autre) const;

    // Affichage
    void afficher() const;
    //Surdefinition
    bool operator==(const Cercle& autre) const;
    friend ostream& operator<<(ostream& os, const Cercle& c);


};

#endif



// Cercle.cpp
