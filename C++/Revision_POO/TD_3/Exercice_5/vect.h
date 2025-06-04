#include<iostream>

using namespace std;

class Erreurdim{
    public:
    int hors;
    Erreurdim(int i){
        hors =i;
    }
};

class Vect {
    int n;
    int *adr;
    int nc;
    public:
    Vect(int);
    ~Vect();
    int& operator[](int );
    void ajout(int );
    void affiche();
};

Vect::Vect(int ns){
    cout<<"Appel du constructeur de la classe vect\n";
    n = ns;nc = 0;
    adr = new int [n];
    for (int i = 0; i < n; i++)
    adr[i]=-1;
    
}

Vect::~Vect(){
    cout<<"Appel du destructeur de la classe vect\n";
    delete adr;
}

int& Vect::operator[](int i){
    if(i<0 || i>n){
        Erreurdim e(i);throw(e);
    }
    return adr[i];
}

void Vect::affiche(){
    for (int i = 0; i < n; i++)
    {
        if(adr[i]!= -1)
        cout<<adr[i]<<"\t";
    }
    
}

void Vect::ajout(int k){
    if(nc<n)
      adr[nc++] = k;
}