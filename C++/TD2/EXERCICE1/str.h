#include<iostream>
#include<string.h>
using namespace std;
class str
{
private:
    int m_longueur;
    char * chaine;
public:
    str(){
        cout<<"L'appel du constructeur"<<this<<endl;
        m_longueur=0;
        chaine=NULL;
    };
    ~str(){
        cout <<"\nl'appel du destructeur"<<this<<endl;
        delete chaine;
    };
    str(char *);
    str(str&);
    friend void affiche(const str&);
    str& operator=(const str& t);
    bool operator ==(const str& g);
    str operator +(const str & p);
    char& operator [](int i);
};

