#include <iostream>
using namespace std;

template <class T, int taille> 
class Ensemble
{
private:
    T tab[taille];
    int  card;
public:
    Ensemble(){
        card = 0;
        cout<<"Constructeur par defaut\n";
    }

    T getCardinal()const{
        return card;
    }
    void ajouter(T);
    void supprimer(T);
    bool contient(T);
    void affiche();
    Ensemble (const Ensemble&);
    Ensemble& operator=(const Ensemble & e){
        if(this == &e)
            return *this;
        card = 0;
        for (int i = 0; i < e.card; i++)
        {
            ajouter(e.tab[i]);
        }
        cout<<"L'operateur d'affectation\n";
        return *this;
    }


};


template <class T, int taille> void Ensemble <T, taille>::ajouter(T n){
    if ( card < taille)
    {
        if (!contient(n))
        {
            tab[card++] = n ;
        }
        else
            cout<<"L'element "<<n<<" est dans l'ensemble\n";
        
    }
    else 
        cout<<"Ensemble plein\n";
    
}
template <class T, int tail> void Ensemble<T,tail>::supprimer(T n){
    if (contient(n))
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
    else
        cout<<"Element "<<n<<" n'est pas dans l'ensemble\n";
    
}

template <class T ,int taille> bool Ensemble <T, taille>::contient(T n){
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == n)
        {
            return true;
        }
        
    }
    return false;
    
}

template <class T, int tail> void Ensemble< T , tail>::affiche(){
    cout<<"Ensemble :";
    for (int i = 0; i < card; i++)
    {
        cout<< tab[i]<< " ";
    }
    cout<<endl;
}

template <class T, int tail> Ensemble<T,tail>::Ensemble(const Ensemble<T,tail>& E){
    //taille = tail;
    card = 0;
    for (int  i = 0; i < E.card; i++)
    {
        tab[i] = E.tab[i];
        card++;
    }
    cout<<"Le constructeur de recopie\n";
}