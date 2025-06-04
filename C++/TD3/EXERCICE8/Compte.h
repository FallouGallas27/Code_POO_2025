#ifndef COMPTE_H
#define COMPTE_H
class Compte
{
protected:
    long numero;
    double solde;
public:
    Compte(long);
    ~Compte();
    void affiche();
    void versement(double);
    bool retrait(double);
};
#endif

