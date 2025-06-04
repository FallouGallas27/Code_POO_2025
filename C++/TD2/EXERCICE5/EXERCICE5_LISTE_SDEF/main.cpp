#include"pile.h"
int main(){
    pile p;
    p.empiler(1);
    p.empiler(2);
    p.empiler(3);
    p.empiler(4);
    p.empiler(5);
    cout<<"affiche\n";
    p.afficher();
    int k=p.sommet();
    cout<<"\nLe sommet est "<<k<<endl;
    p.depiler();
    p.depiler();
    p.depiler();
    cout<<"\n Apres le depilage des trois elements\n";
    p.afficher();
    return 0;
}