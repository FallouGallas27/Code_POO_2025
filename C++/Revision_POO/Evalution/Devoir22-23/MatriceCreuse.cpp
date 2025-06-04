#include "MatriceCreuse.h"


MatriceCreuse::MatriceCreuse(matrice m)
{
   int non_null = 0;
   for (int i = 0; i < m.l; i++)
   {
        for (int j = 0; j < m.c; j++)
        {
            if(m.m[i][j] != 0)
                non_null ++;
        }
        
   }
   colonne = non_null;
   matri_creuse = new int*[3];
   for (int i = 0; i < 3; i++)
   {
        matri_creuse[i] = new int[colonne];
   }
   int j_parcurt = 0;
   for (int i = 0; i < m.l; i++)
   {
    for (int j = 0; j < m.c; j++)
    {
        if (m.m[i][j] != 0)
        {
            matri_creuse[0][j_parcurt] = i;
            matri_creuse[1][j_parcurt] = j;
            matri_creuse[2][j_parcurt] = m.m[i][j];
            j_parcurt ++;
        }
        
    }
    
   }

}

MatriceCreuse::~MatriceCreuse()
{
    for (int i = 0; i < 3 ;i++)
    {
        delete matri_creuse [i];
    }
    delete [] matri_creuse;
}

void MatriceCreuse::affiche(){
    cout<<"Affichage de la matrice creause\n";
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < colonne; j++)
        {
            cout<< matri_creuse[i][j]<<" ";
        }
        cout<<endl;
    }
}