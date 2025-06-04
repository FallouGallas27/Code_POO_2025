#include<iostream>
#include<cmath>
using namespace std;
struct centre
   {
    unsigned int m_x;
    unsigned int m_y;
   };
class cercle
{
private:
    unsigned int m_rayon;
    centre c;
public:
    //centre c;
    cercle(unsigned int rayon=0,unsigned int centre=0 ,unsigned int ro=0 );
    ~cercle();
    unsigned int getrayon()const;
    centre getcentre()const;
    unsigned int perimetre()const;
    float surface()const;
    void setrayon(unsigned int );
    void setcentre(unsigned int,unsigned int);
    bool compare(const cercle&);
    friend void operator<<(ostream&s,const centre& d);
    //void affichecentre();
    void affichercercle() ;
    bool operator==(const cercle&c);
};

