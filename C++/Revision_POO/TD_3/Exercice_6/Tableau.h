#include <iostream>

using namespace std;
class ErreurDimension {
public:
int dim;
ErreurDimension(int i) { dim = i; }
};
class Tableau{
    protected:
    int *tab;
    int max;
    public:
    Tableau(int l){
        max = l;
        tab = new int [max];
    }
    int & operator[](int i){
        if(i<0 || i>=max){
            throw ErreurDimension (i);
        }
        return tab[i];
    }
    ~Tableau(){
        delete [] tab;
    }
};