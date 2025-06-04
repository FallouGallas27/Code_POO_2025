#include <iostream>
#include <string>

using namespace std;
enum Mode_expedition {express,normal};
class Boite
{
protected:
    double poids;
    Mode_expedition mode;
    string adress_dest;
    string adress_expedition;
public:
    Boite(double poid ,string dest,string exped,Mode_expedition nor){
        poids=poid;
        adress_dest = dest;
        adress_expedition = exped;
        mode = nor;
    }
    virtual~Boite(){}
    virtual void affiche()=0;
    virtual double CalculPrix()=0;
};
