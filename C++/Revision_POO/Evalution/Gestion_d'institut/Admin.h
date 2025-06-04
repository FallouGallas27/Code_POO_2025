#ifndef _ADMIN_H
#define _ADMIN_H
#include "Personnel.h"
class Admin : public Personnel
{
private:
    double salaire;
public:
    Admin(string,string, int, string, double);
    ~Admin();
    void affiche();
    double moyenne();
};
#endif