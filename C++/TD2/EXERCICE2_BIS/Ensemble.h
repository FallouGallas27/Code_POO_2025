#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 100
class Ensemble
{
private:
    int max;
    int m_elements;
    int *tab;
public:
    Ensemble(int c=0){
        cout<<"\nAppel du constructeur par defaut"<<this<<endl;
        m_elements=0;
        max=c;
        tab=new int[max];
        };
    ~Ensemble(){
        cout<<"\nAppel du destructeur "<<this<<endl;
        delete tab;
    };
    bool operator %(int );
    Ensemble& operator<<(int );
    Ensemble& operator>>(int );
    Ensemble operator+(const Ensemble&p);
    Ensemble operator*(const Ensemble& p);
    void init();
    bool existe();
    void prochain();
    void afficher();
    int cardinal()const;
   

};