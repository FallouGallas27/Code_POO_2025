#include"Rectangle.h"
void dessiner(Rectangle r){
    for (int i = 0; i < 20; i++)
    {
        cout<<" ";
    }
    
    for (int i = 0; i < r.GetLargeur()+1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int  i = 0; i < r.GetHauteur(); i++)
    {
        for (int k  = 0; k < 20; k++)
        {
            cout<<" ";
        }
        
        cout<<"*";
        for (int j = 0; j < r.GetLargeur() - 1; j++)
        {
            cout<<" ";
        }
        
        cout<<"*\n";
    }
    for (int i = 0; i < 20; i++)
    {
        cout<<" ";
    }
    for (int i = 0; i < r.GetLargeur() + 1; i++)
    {
        cout<<"*";
    }
    

}
int main(){
    Rectangle r(10, 8),d(3,5);
    r.Affiche();
    cout<<"Le primetre du rectangle "<<r.perimetre()<<endl;
    cout<<"La surface du rectangle "<<r.surface()<<endl;
    r.SetHauteur(5);
    r.SetLargeur(3);
    cout<<"La largeur du rectangle "<<r.GetLargeur()<<endl;
    cout<<"La hauteur du rectangle "<<r.GetHauteur()<<endl;
    if (r.Compare(d))
    {
        cout<<"Les deux rectangle sont egaux"<<endl;
    }
    else
        cout<<"Les deux rectangles sont differents"<<endl;

    dessiner(r);
}