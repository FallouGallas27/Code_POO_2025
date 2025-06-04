#include <iostream>
using namespace std;

template <class T, int taille> 
class Ensemble
{
private:
    T tab[taille];
    T card;
    T court;
public:
    Ensemble(){
        card = 0;
        cout<<"Appel du constructeur "<<endl;
    }
    Ensemble& operator<<(T n){
         if (card < taille)
            {
                if (!(*this % n))
                {
                    tab[card++] = n;
                }
                else cout<<"L'element "<<n<<" est dans l'ensemble\n";
                
            }
            else cout<<"Ensemble plein!!!\n";
            return *this;
    }
    Ensemble& operator>>(T n){
        if (*this % n)
        {
            for (int i = 0; i < card; i++)
            {
                if (tab[i] == n)
                {
                    for (int j = i; j < card; j++)
                    {
                        tab[j] = tab[j + 1];
                    }
                    
                }
                
            }
            card --;
        }
        return *this;
    }
    bool operator%(T n){
        for (int i = 0; i < card; i++)
            {
                if (tab[i] == n)
                {
                    return true;
                }
                
            }
    return false;
    }
    void affiche(){
        cout<<"Ensemble :";
        for (int i = 0; i < card; i++)
        {
            cout<<tab[i]<<" ";
        }
        cout<<endl;
    }
    Ensemble& operator=(const Ensemble<T,taille> & E){
        if (this == & E)
        {
            return *this;
        }
        card = 0;
        for (int i = 0; i < E.card; i++)
        {
            tab[i] = E.tab[i];
            card ++;
        }
        //cout<<"L'operateur d'affectation \n";
        return *this;
        
    }
    Ensemble operator*(const Ensemble <T,taille>& E){
        Ensemble<T,taille> E1;
        for (int i = 0; i < taille; i++)
        {
            for (int  j = 0; j < taille; j++)
            {
                if(tab[i] == E.tab[j])
                    E1<<tab[i];
            }
            
         
        }
        return E1;
    }
    Ensemble operator +(Ensemble<T, taille>& E){
        Ensemble <T, taille> E1;
        E1.card = 0;
        int i = 0, j = 0;
        while (i < card )
        {
                E1<< tab[i];
                i++;
        }
        while (j < E.card)
        {
           E1<< E.tab[j++];
        }
        
        return E1;
    }

    void init(){
        court = 0;
    }
    bool existe(){
        return court < card;
    }
    T prochain(){
        return tab[court++];
    }
};
