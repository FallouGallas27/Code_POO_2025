#include <iostream>
#include <exception>
using namespace std;
class ErrorIndice :public exception{
    private:
    int idx;
    string message;
    public:
    ErrorIndice(int n): idx(n){
        message  = "Debordement d'indice " + to_string(idx);
    }
    const char * what() const noexcept override{
        return message.c_str();
    }
};

template <class T, int taille>

class Vecteur
{
private:
    T vect[taille];
public:
    Vecteur(){
        cout<<"Appel du const de vect"<<this<<endl;
    }
    ~Vecteur(){}
    T& operator[](int);
};

template<class T, int n> T& Vecteur<T, n>:: operator[](int elmt){
    if (elmt < 0 || elmt >= n)
    {
        throw ErrorIndice(elmt);
    }
    return vect[elmt];
}