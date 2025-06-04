#include "Personnel.h"


Personnel::Personnel(string n,string ad, int an, string bur):Membre(n, ad, an)
{
    bureau = bur;
}

Personnel::~Personnel(){}
void Personnel::affiche(){
    Membre::affiche();
    cout<<"\tBureau\t"<<bureau;

}
double Personnel::moyenne(){
    return 0;
}