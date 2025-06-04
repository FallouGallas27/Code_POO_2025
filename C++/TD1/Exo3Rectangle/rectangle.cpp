#include"rectangle.h"
rectangle::rectangle(unsigned int longueur,unsigned int largeur)
{
    cout<<"appel du constructeur\n";
    m_hauteur=longueur;
    m_largeur=largeur;
}

rectangle::~rectangle()
{
    cout <<"\nappel du destructeur" <<this<<endl;
}
     unsigned int rectangle:: getlargeur()const{
        return m_largeur;
     }
unsigned int rectangle::gethauteur()const{
        return m_hauteur;
}
    unsigned int rectangle:: perimetre()const{
            return 2*(gethauteur()+getlargeur());
    }
    unsigned int rectangle:: surface()const{
        return gethauteur()*getlargeur();
    }
    void  rectangle:: setlargeur(unsigned int larg){
        m_largeur=m_largeur+ larg;
    }
    void  rectangle::sethauteur(unsigned int haut){
        m_hauteur=m_hauteur+ haut;
        
    }
    bool  rectangle::compare( const rectangle& rect){
        if(m_largeur==rect.m_largeur&&m_hauteur==rect.m_hauteur){
            return true;
        }
        return false;
    }
void rectangle::affiche()
{
    unsigned int i,j;
     for( i= 0;i<m_hauteur;i++)
        {
        for(j=0;j<m_largeur;j++)
         {
            if (i==0||i==m_hauteur-1||j==0||j==m_largeur-1)
             {
                cout<<"+";
             } else
              {
                cout <<"+";
              }
       }
        cout<<endl;
     }
}
bool rectangle::operator==(const rectangle&r){
     if(m_largeur==r.m_largeur &&m_hauteur==r.m_hauteur)
        return true;
     return false;
}
 ostream & operator<<(ostream & sortie,const rectangle& rect){
     unsigned int i,j;
     for(i=0;i<rect.m_hauteur;i++){
        for(j=0;j<rect.m_largeur;j++)
         {
            if (i==0||i==rect.m_hauteur-1||j==0||j==rect.m_largeur-1)
             {
                sortie<<"*";
             } else
              {
                sortie<<" ";
              }
       }
        sortie<<endl;
     }
     return sortie;
 }
