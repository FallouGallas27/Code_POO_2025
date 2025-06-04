#ifndef VECT_H
#define VECT_H
#include<iostream>
using namespace std;
class vect
{
private:
    int n;
    int *adr;
public:
    vect(int);
    ~vect();
    int & operator[](int);
};
#endif
