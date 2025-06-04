#include<iostream>
#include<iomanip>
using namespace std;
class rectangle
{
private:
   unsigned int m_hauteur;
   unsigned int m_largeur;
public:
    rectangle( unsigned int longueur =0,unsigned int largeur=0);
    ~rectangle();
    unsigned int getlargeur()const;
    unsigned int gethauteur()const;
    unsigned int perimetre()const;
    unsigned int surface()const;
    void setlargeur(unsigned int);
    void sethauteur(unsigned int);
    bool compare(const rectangle&);
    bool operator==(const rectangle&);
    friend ostream & operator<<(ostream & sortie,const rectangle&);
    void affiche();
};

