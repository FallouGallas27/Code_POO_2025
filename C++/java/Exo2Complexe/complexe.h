#include<iostream>
#include<math.h>
using namespace std;
class complexe
{
private:
    double m_x;
    double m_iy;
public:
    complexe(double x,double y);
    ~complexe();
    double reelle()const;
    double imaginaire()const;
    double module();
    complexe ajouter(complexe&);
    complexe multiplier(complexe&);
    complexe operator+( complexe&);
    complexe operator*( complexe&);
    friend ostream& operator<<(ostream& sortie,complexe &k);
    void affiche();
};


