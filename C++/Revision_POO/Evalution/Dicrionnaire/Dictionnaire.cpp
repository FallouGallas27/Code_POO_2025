#include "Dictionnaire.h"


Dictionnaire::Dictionnaire(int n):taille(n)
{
    tab = new traduction*[taille];
    for (int  i = 0; i < n; i++)
    {
        tab[i] = nullptr;
    }
    
}

Dictionnaire::~Dictionnaire()
{
    delete [] tab;
}
void Dictionnaire::ajout(traduction* mot){
    int i = 0;
    while (i < taille && tab[i] != nullptr)
    {
        i++;
    }
    if (i < taille)
    {
        tab [i] = mot;
    }
    
}

char* Dictionnaire::DSearch(char* mot){
    int i =0 ,droite, gauche;
    while (i < taille && tab[i] != nullptr)
    {
        i++;
    }
    droite = i;
    gauche = 0;
    int resultat = droite - gauche /2;
    while (resultat != 0)
    {
        if (strcmp(tab[resultat]->mot1, mot) == 0)
        {
            return tab[resultat]->mot2;
        }
        else
        {
            if (strcmp(tab[resultat]->mot1, mot) > 0)
            {
                droite = resultat - 1;
                resultat = droite - gauche / 2;
            }
            else
            {
                gauche = resultat + 1;
                resultat = droite - gauche /2;
            }
               
        }
        
        
    }
    return nullptr;
}
