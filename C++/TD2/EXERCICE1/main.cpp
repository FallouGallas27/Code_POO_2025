#include"str.h"
int main(){
    char mot[]="bonjour";char mmot[]="  tout le monde";
    str  t(mot);str t3(mmot);
    cout<<"affichage\n";
    affiche(t);cout<<"\n";
    affiche(t3);
    str t4=t3; 
    cout<<"\nL'affichage du constructure de copie\n";str t2(t);affiche(t2);
    cout<<"\nL'affichage de la surdefinition de l'operateur =\n";affiche(t4);cout<<"\n";
    if(t==t){
        cout<<"Les chaines sont egals\n";
    }
    else{
        cout<<"Les deux sont differents\n";
    }
    cout<<"L'operateur +\n";
    t=t+t3;
    affiche(t);
    cout<<"\nieme rang\n";
    cout<<t3[14];

}