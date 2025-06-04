#ifndef ADMIN_H
#define ADMIN_H
#include "Salarie.h"
class Admin :public Salarie{
    private:
    char fonction[30];

    public :
    Admin(char n[10],char cp[20],char f[30]);
    ~Admin();
    char* getFonction();
    void affiche();
};
#endif 