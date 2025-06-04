#include "Ensemble.h"

Ensemble::Ensemble(int cap) : taille(0), capacite(cap) {
    tab = new Etudiant[capacite];
}
Ensemble::Ensemble(const Ensemble &e) : taille(e.taille), capacite(e.capacite) {
    tab = new Etudiant[capacite];
    for (int i = 0; i < taille; ++i) {
        tab[i] = e.tab[i];
    }
}
Ensemble &Ensemble::operator=(const Ensemble &e) {
    if (this != &e) {
        delete[] tab;
        taille = e.taille;
        capacite = e.capacite;
        tab = new Etudiant[capacite];
        for (int i = 0; i < taille; ++i) {
            tab[i] = e.tab[i];
        }
    }
    return *this;
}
Ensemble::~Ensemble() {
    delete[] tab;
}
Ensemble& Ensemble::operator<<(const Etudiant &e) {
    if (taille < capacite && !existe(e)) {
        tab[taille++] = e;
    }
    return *this;
}
Ensemble& Ensemble::operator>>(Etudiant &e) {
    if (taille > 0) {
        e = tab[--taille];
    }
    return *this;
}
bool Ensemble::operator%(const Etudiant &e) const {
    return existe(e);
}
Ensemble& Ensemble::operator+(const Ensemble &e) {
    Ensemble *result = new Ensemble(taille + e.taille);
    for (int i = 0; i < taille; ++i) {
        *result << tab[i];
    }
    for (int i = 0; i < e.taille; ++i) {
        *result << e.tab[i];
    }
    return *result;
}
Ensemble& Ensemble::operator*(const Ensemble &e) {
    Ensemble *result = new Ensemble();
    for (int i = 0; i < taille; ++i) {
        if (e.existe(tab[i])) {
            *result << tab[i];
        }
    }
    return *result;
}
void Ensemble::afficher() {
    for (int i = 0; i < taille; ++i) {
        cout << tab[i] << endl;
    }
}
void Ensemble::init() {
    taille = 0;
}
bool Ensemble::existe(const Etudiant &e) const {
    for (int i = 0; i < taille; ++i) {
        if (tab[i].id == e.id) {
            return true;
        }
    }
    return false;
}
Etudiant* Ensemble::prochain() {
    if (taille > 0) {
        return &tab[taille - 1];
    }
    return nullptr;
}
