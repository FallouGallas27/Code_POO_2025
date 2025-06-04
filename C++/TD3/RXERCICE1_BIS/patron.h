#include<iostream>
using namespace std;
template <class T,int n> class vect{
    T _m[n];
    public:
    vect(){
        cout<<"\nAppel du constructeur\n";
        for(int i=0;i<n;i++)
         _m[i]=i+1;
    }
    ~vect(){
        cout<<"Appel du destructeur";
    }
    T& operator[](int i) {
        if(i<0||i>n)
        {cout<<"\nMauvaise indice\n";exit(-1);}
    }
    void affiche();
};
template <class T,int n> void vect <T,n>::affiche(){
    for(int i=0;i<n;i++)
    cout<<_m[i]<<"\t";
}