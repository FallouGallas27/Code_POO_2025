#ifndef VECTB_H
#define VECTB_H
#include "Vect.h"

class Vectb : public Vect
{
private:
    int inf;
    int sup;
public:
    Vectb(int i, int s):Vect(s - i +1){
        inf = i;
        sup = s;
    }
    ~Vectb(){}
    int& operator[](int g){
        if (g < inf || g >= sup)
        {
            throw Errorindice(g);
        }
        return Vect::operator[](g);
    }

};
#endif