#include<iostream>
using namespace std;
template <class T> class vect{
    int dim;
    T* _vecte;
    public:
    vect(int m){
        _vecte=new T[dim=m];
        for(int i=0;i<m;i++) {
            _vecte[i]=2*i;
        }
        cout<<"\nAppel du constructeur\n";
    }
    ~vect(){
        delete[] _vecte;
        cout<<"\n Appel du destructeur\n";
    }
    T& operator[](int i){
        if(i<0||i>dim){
            cout<<"\n Mauvaise indice\n";
            exit(-1);
        }
        else
         return _vecte[i];
    }
    void afficher();
};
template <class T> void vect<T>::afficher(){
    for(int i=0;i<dim;i++)
      cout<<_vecte[i]<<"\t";
}