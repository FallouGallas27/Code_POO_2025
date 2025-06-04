#include<iostream>
using namespace std;
class Complexe
{
protected:
    double reelle;
    double imaginaire;
public:
    Complexe(double reel = 0,double imag = 0);
    ~Complexe();
    double getReelle();
    double getImaginaire();
    double Modulle();
    Complexe ajouter(Complexe&);
    Complexe multiplier(Complexe&);
    Complexe operator+(Complexe&);
    Complexe operator*(Complexe&);
    friend ostream& operator<<(ostream& , Complexe&);
    void aficher();
    
};
