#include"file.h"
int main(){
    file F;
    F.enfiler(1);
    F.enfiler(2);
    F.enfiler(3);
    F.enfiler(4);
    F.enfiler(5);
    F.enfiler(6);
    //F.affiche();
    cout<<"\nAffichage de la file\n";
    F.affiche();
    cout<<"\n La tete de la file est :"<<F.tetefile();
}