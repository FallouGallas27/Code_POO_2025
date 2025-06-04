#include "Boite.h"

class lettre : public Boite
{
private:
    string format;
public:
    lettre(double poid ,string dest,string exped,Mode_expedition nor,string forme);
    ~lettre();
    void affiche();
    double CalculPrix();
};


