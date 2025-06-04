
// Vect.h
#ifndef VECT_H
#define VECT_H

#include <iostream>
#include <stdexcept>
using namespace std;

// Classe d'exception personnalisée pour les erreurs d'indice
class Errorindice : public std::exception {
private:
    int indice;
    string message;
public:
    Errorindice(int idx) : indice(idx) {
        message = "Erreur d'indice: " + to_string(idx);
    }
    
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class Vect {
protected:
    int n;      // taille du vecteur
    int* adr;   // pointeur vers le tableau dynamique
    
public:
    Vect(int v);
    virtual ~Vect();
    virtual int& operator[](int a);
};

#endif
