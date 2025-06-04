#include"souris.h"
souris::souris(string noom):mamifere(noom)
{
    cout<<"\nAppel du const de la souris\t"<<nom;
}
souris::~souris()
{
    cout<<"\n Appel du dest. de la souris \t"<<nom;
}
void souris::s_exprime(){
        cout<<nom<<" est un souris et s'exprime par un <<couic>>\n";
    }