#include <iostream>
using namespace std;
#include <exception>
class ErrorIndice : public exception {
    private:
    int idx;
    string message;
    public:
    ErrorIndice (int elmt){
        idx = elmt;
        message = "Debordement d'indice "+ to_string(idx);
    }
    const char* what()const noexcept override{
        return message.c_str();
    }
};
class Taille5 {
public:
    static const int valeur = 5;
};

template <class T, class V> 
class Vecteur {
    private:
    T vect[V::valeur];
    public:
    Vecteur() {
        cout << "Appel du constructeur de vecteur " << this << endl;
    }
    ~Vecteur() {}
    T& operator[](int);
};
template <class T, class V> T& Vecteur<T, V>::operator[](int elmt) {
    if (elmt < 0 || elmt >= V::valeur) {
        throw ErrorIndice(elmt);
    }
    return vect[elmt];
}
//     return vect[elmt];
