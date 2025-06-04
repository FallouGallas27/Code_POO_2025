// Vectb.h
#ifndef VECTB_H
#define VECTB_H

#include "Vect.h"

class Vectb : public Vect {
private:
    int inf;    // borne inférieure
    int sup;    // borne supérieure
    
public:
    Vectb(int a, int b);
    ~Vectb() { cout << "Appel du destructeur de Vectb\n"; }
    int& operator[](int d) override;
};

#endif

