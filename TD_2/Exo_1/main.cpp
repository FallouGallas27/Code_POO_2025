#include "str.h"

int main(){
    char mot[] = "Gsllaas",mot1[] = "Fallou";
    str s(mot),d(mot), k(mot1),n(mot),g;
    d = s = k;
    d.affiche();
    s.affiche();
    
    if (s == d)
    {
        cout<<"Les deux chaines sont egals\n";
    }
    else
    {
        cout<<"Les deux chains sont differentes\n";
    }
    g = k + n;
    cout<<"La concatenation  ";g.affiche();
    
}