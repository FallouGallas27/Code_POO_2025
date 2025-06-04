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
    virtual ~Vaccin() {}  // Virtual destructor for polymorphism
    friend ostream& operator<<(ostream&, const Vaccin&);
    virtual double conditionnement();
    virtual double fabrication();
    virtual double production();
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
    double production() override;
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

// Structure pour un nœud de la liste chaînée
struct Node {
    Vaccin* data;
    Node* next;
    
    Node(Vaccin* v) : data(v), next(nullptr) {}
};

class compagnie {
private:
    string nom;
    Node* head;
public:
    compagnie(string);
    ~compagnie();
    void ajout(Vaccin*);
    void affiche();
    double production();
};

compagnie::compagnie(string n) {
    nom = n;
    head = nullptr;
    cout << "\nAppel du const de la compagnie " << nom;
}

compagnie::~compagnie() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current->data;  // Supprimer l'objet Vaccin
        delete current;  // Supprimer le nœud lui-même
        current = nextNode;
    }
    cout << "\nAppel du destructeur de la compagnie " << nom;
}

void compagnie::ajout(Vaccin* v) {
    Node* newNode = new Node(v);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void compagnie::affiche() {
    Node* current = head;
    while (current != nullptr) {
        cout << *(current->data) << endl;
        current = current->next;
    }
}

double compagnie::production() {
    double cout_total = 0;
    Node* current = head;
    while (current != nullptr) {
        cout_total += current->data->production();
        current = current->next;
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
    
    compagnie comp("CompA");
    comp.ajout(&v);
    comp.ajout(&d);
    comp.ajout(&v2);
    
    comp.affiche();
    cout << "Production totale de la compagnie : " << comp.production() << endl;
}
