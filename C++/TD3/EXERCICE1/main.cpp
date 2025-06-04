#include"patron.h"
int main(){
    vect <int> _v(5);
    _v.afficher();
    _v[4]=67;
    cout<<endl;
    _v.afficher();
    cout<<"\n La definition de T&\t";
    cout<<_v[-1];
}