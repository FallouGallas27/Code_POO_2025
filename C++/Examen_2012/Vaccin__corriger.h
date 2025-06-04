#include<iostream>
#include<string>
using namespace std;

const double COND_UNITE = 0.5;
const double PRIX_BASE = 1.5;
const double MAJORATION_HIGHTECH = 0.5;
const double REDUCTION_DELOC = 0.2;

enum Fabrication { Standard, Hightech };

class Vaccin {
protected:
    string nom;
    double volumedose;
    int nbdoseaproduire;
    Fabrication mode_fabrication;
public:
    Vaccin(string, double, int, Fabrication = Standard);
    friend ostream& operator<<(ostream&, const Vaccin&);
    double conditionnement();
    double fabrication();
    double production();
protected:
    void affiche();
};

Vaccin::Vaccin(string noom, double volume, int dosepro, Fabrication vav) {
    nom = noom;
    volumedose = volume;
    nbdoseaproduire = dosepro;
    mode_fabrication = vav;
    cout << "\nAppel du const du vaccin " << nom << endl;
}

ostream& operator<<(ostream& sortie, const Vaccin& v) {
    sortie << v.nom;
    sortie << "\nVolume/dose:  " << v.volumedose;
    sortie << "\nNombre de doses:  " << v.nbdoseaproduire;
    sortie << "\nMode de fabrication: ";
    if (v.mode_fabrication == Hightech) {
        sortie << "Hightech";
    } else {
        sortie << "Standard";
    }
    return sortie;
}

double Vaccin::conditionnement() {
    return volumedose * nbdoseaproduire * COND_UNITE;
}

double Vaccin::fabrication() {
    double cout = volumedose * nbdoseaproduire * PRIX_BASE;
    if (mode_fabrication == Hightech)
        cout += cout * MAJORATION_HIGHTECH;
    return cout;
}

double Vaccin::production() {
    return (conditionnement() + fabrication());
}

void Vaccin::affiche() {
    // Méthode à implémenter si nécessaire
}

class delocalise : public Vaccin {
protected:
    bool frontalier;
public:
    delocalise(string, double, int, bool, Fabrication = Standard);
    double production();
};

delocalise::delocalise(string noom, double volume, int dose, bool b, Fabrication fab) 
    : Vaccin(noom, volume, dose, fab) {
    cout << "\nAppel du const de delocalise";
    frontalier = b;
}

double delocalise::production() {
    double c = Vaccin::production();
    if (frontalier == true) {
        c = c - c * REDUCTION_DELOC;
    } else {
        c = c / 2;
    }
    return c;
}

class compagnie : public Vaccin {
private:
    string nom;
    int max;
    int nbelmt;
    Vaccin** v;
public:
    compagnie(string, double, int, string, int, Fabrication = Standard);
    ~compagnie();
    void ajout(Vaccin*);
    void affiche();
    double production();
};

compagnie::compagnie(string nn, double f, int g, string l, int d, Fabrication x) 
    : Vaccin(nn, f, g, x) {
    nom = l;
    max = d;
    nbelmt = 0;
    v = new Vaccin * [max];
    cout << "\nAppel du const de la compagnie " << nom;
}

compagnie::~compagnie() {
    if (v) delete[] v;
    cout << "\nAppel du dest " << nom;
}

void compagnie::ajout(Vaccin* b) {
    if (nbelmt < max)
        v[nbelmt++] = b;
}

void compagnie::affiche() {
    for (int i = 0; i < nbelmt; i++)
        cout << *v[i] << endl;
}

double compagnie::production() {
    double cout_total = 0;
    for (int i = 0; i < nbelmt; i++) {
        cout_total += v[i]->production();
    }
    return cout_total;
}

int main() {
    Vaccin v("Triphas", 0.2, 10000);
    delocalise d("Triphas", 0.2, 10000, true, Hightech);
    delocalise d2("Remede", 0.3, 1600, false, Standard);
    Vaccin v2("Zamiflu", 0.55, 200000, Hightech);
    Vaccin v3("Triphas", 0.20, 10000);

    cout << d << endl;
    cout << d2 << endl;
    
    compagnie comp("CompA", 0.3, 5000, "CompA", 10);
    comp.ajout(&v);
    comp.ajout(&d);
    comp.ajout(&v2);
    
    comp.affiche();
    cout << "Production totale de la compagnie : " << comp.production() << endl;
}
