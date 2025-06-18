#ifndef ADMIN_H
#define ADMIN_H
#include "Salarie.h"

class Admin : public Salarie
{
private:
    string fonction;
public:
    Admin(string, string, string);
    ~Admin();
    string getFonction()const;
    Admin (const Admin &);
    Admin& operator=( Admin&);
    void affiche();
};

#endif