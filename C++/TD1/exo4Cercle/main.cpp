#include "cercle.h"
int main(){
    cercle c1(5,1,1),c2(5,1,1),c3(3,3,4);unsigned int rayon;//centre c;
    cout<<"Affichage d'un cercle\n";
    c1.affichercercle();
    if(c1.compare(c2)){
      cout<< "Les deux cercles sont egals\n";
      }
    else{ 
     cout<<"les deux cercles sont differents\n";
     }
     cout<<"Avec la sur-definition de l'operateur ==\n";
    if(c1==c3){
      cout<< "Les deux cercles sont egals\n";
      }
    else{ 
     cout<<"les deux cercles sont differents\n";
     }

    cout<<"Le perimetre du cercle est :\t"<<c1.perimetre()<<endl;
    cout<<"La surface du cercle est :\t"<<c1.surface()<<endl;
    rayon=c1.getrayon();
    cout <<"Le rayon du cercle est:\t"<<rayon;
    cout <<"Le centre du cercle est:\t";//c1.affichecentre();
    c1.getcentre();
    c1.setrayon(3);
    c1.setcentre(2,3);
    cout<<"Le perimetre du cercle est :\t"<<c1.perimetre()<<endl;
    cout<<"La surface du cercle est :\t"<<c1.surface()<<endl;
    
}