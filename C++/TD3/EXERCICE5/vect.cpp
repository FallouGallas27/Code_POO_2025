#include"vect.h"
vect::vect(int elmt){
    n=elmt;
    adr=new int[elmt];
    cout<<"]n Appel du contructeur  "<<this<<endl;
}
vect::~vect(){
    delete adr;
    cout<<"\nAppel du destructeur  "<<this<<endl;
}
int & vect::operator[](int i){
    if(i<0||i>n){
        cout<<"\n ATTENTION !!!Mauvaise indice\n";
        exit(-1);
    }
    return adr[i];
}