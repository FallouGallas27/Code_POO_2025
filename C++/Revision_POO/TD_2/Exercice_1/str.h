#include <iostream>
#include<string.h>
using namespace std;
class ErrreurDim{
    public:
    int hors;
    ErrreurDim(int i):hors(i){}
};
class str
{
private:
    int longueur;
    char * chaine;
public:
    str();
    str(char*);
    str( const str&);
    ~str();
    str& operator = (const str&);
    bool operator  ==(const str&);
    str operator +(const str&);
    char operator[](int );
    void affiche();
    
};

