#ifndef VECTB_H
#define VECTB_H
#include"vect.h"
class vectb:public vect
{
private:
    int borneinf;
    int bornesup;
public:
    vectb(int,int);
    ~vectb();
};
#endif
