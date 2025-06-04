#include <iostream>

using namespace std;
class Rectangle
{
private:
    unsigned int largeur;
    unsigned int hauteur;
public:
    Rectangle(unsigned int l =0, unsigned int h =0);
    ~Rectangle();
    unsigned int GetLargeur();
    unsigned int GetHauteur();
    unsigned int perimetre();
    unsigned int surface();
    void SetLargeur(unsigned int);
    void SetHauteur(unsigned int);
    bool Compare(const Rectangle&);
    void Affiche();
    
};
