#include "Tableau.h"

class Pile : public Tableau{
    int niveau;
    public :
    Pile(int n):Tableau(n){
        niveau =0;
    }
    bool pilevide(){
        return niveau==0;
    }
    void empiler(int n){
       if(niveau >= max)
        throw ErreurDimension(niveau);
        (*this)[niveau++] = n;
    }
    int  depiler(){
        if(niveau >= max)
            throw ErreurDimension(niveau);
        niveau --;
        return (*this) [niveau];
    }
};