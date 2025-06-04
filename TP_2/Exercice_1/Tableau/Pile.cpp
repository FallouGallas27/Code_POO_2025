#include <cstring> // pour strlen
#include <cctype>  // pour isdigit
#include "Pile.h"

Pile::Pile(int n ){
    taille = n;
    nbelmt = 0;
    tab = new int[n];
    
    //cout<<"Appel du constructeur "<<this<<endl;
}
Pile::~Pile(){
    //cout<<"Appel du destucteur "<<this<<endl;
    if (tab)
    {
        delete[] tab;
    }
    
}
void Pile::empiler(int val) {
    if (nbelmt < taille )
    {
        tab[nbelmt++] = val;
    }
    else
        cout<<"La pile est pleinne!!!\n";
    
}

int  Pile::depiler(){ 
    if (!est_vide())
    {
        return tab[--nbelmt];
    }
    else
        cout<<"La pile est vide\n";
}
int  Pile::sommet(){ 
    if (!est_vide())
    {
        return tab[nbelmt- 1];
    }
    
    cout << "Pile vide.\n";
    return -1; 
}
bool Pile::est_vide() {
        if (nbelmt == 0 ) 
            return true;
    return false;
}

void Pile::affiche() {
    cout << "Pile : ";
    for (int i = nbelmt - 1; i >= 0; i--) {
            cout << tab[i] << " ";
    }
    cout << endl;
}

Pile::Pile(Pile& p){
    Pile d(p.taille);
    while (!p.est_vide())
    {
        d.empiler(p.depiler());
    }
    taille = p.taille;
    tab = new int[taille];
    nbelmt = 0;
    while (!d.est_vide())
    {
        empiler(d.depiler());
    }
    cout<<"Le construceur de recopie\n";
}
Pile& Pile::operator = (Pile& p){
    if (this == &p)
    {
        return *this;
    }
    delete tab;
    taille = p.taille;nbelmt = 0;
    tab = new  int [taille];
    Pile d(p.taille);
    while(!p.est_vide())
    {
        d.empiler(p.depiler());
    }
    while (!d.est_vide())
    {
        empiler(d.depiler());
    }
    return *this;
    
}


int Pile::evaluation_postfix(char *expression, int taille) {
    int resultat = 0;
    for (int i = 0; i < taille; i++) {
        if (isdigit(expression[i])) {
            empiler(expression[i] - '0');  // Conversion char vers int
        } else {
            int b = depiler();
            int a = depiler();
            switch (expression[i]) {
                case '+': resultat = a + b; break;
                case '-': resultat = a - b; break;
                case '*': resultat = a * b; break;
                case '/': resultat = a / b; break;
                default:
                    cout << "Operateur non reconnu : " << expression[i] << endl;
                    return -1;
            }
            empiler(resultat);
        }
    }
    return depiler();  
}
int priorite(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}
void Pile::infix_to_postfix(const char* infixe, char* postfixe) {
    Pile pile(taille);
    int j = 0;

    for (int i = 0; infixe[i] != '\0'; ++i) {
        char c = infixe[i];

        if (c == ' ') continue;

        if (c >= '0' && c <= '9') {
            postfixe[j++] = c;
        } else if (c == '(') {
            pile.empiler(c);
        } else if (c == ')') {
            while (!pile.est_vide() && pile.sommet() != '(') {
                char d = pile.depiler();
                postfixe[j++] = d;
            }
            if (!pile.est_vide()) pile.depiler(); // Enlève '('
        } else { // opérateur
            while (!pile.est_vide() && priorite(pile.sommet()) >= priorite(c)) {
                postfixe[j++] = pile.depiler();
            }
            pile.empiler(c);
        }
    }

    while (!pile.est_vide()) {
        postfixe[j++] = pile.depiler();
    }

    postfixe[j] = '\0'; // Fin de chaîne
}

