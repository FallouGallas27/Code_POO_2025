#include"canari.h"
canari::canari(string noom):oiseau(noom)
{
    cout<<"\nAppel du const de canari"<<nom<<"\n";
}

canari::~canari()
{
    cout<<"\nAppel du dest de canari "<<nom<<"\n";
}
void canari::s_exprime(){
    cout<<nom<<"  est un canari et s'exprime par un <<cui-cui>>\n" ;
}