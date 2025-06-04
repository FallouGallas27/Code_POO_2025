#include<cstring>
#include "Pile.h"
int f(Pile p){
    Pile c(p);
    return c.sommet();
}
int main(){
    Pile p(6);
    cout<<"Empilage de 1 2 3 4 5\n";
    p.empiler(1);
    p.empiler(2);
    p.empiler(3);
    p.empiler(4);
    p.empiler(5);
    p.affiche();
    p.depiler();
    p.depiler();
    cout<<"Depilage de 2 elements\n";
    p.affiche();
    if (p.est_vide())
    {
        cout<<"La pile est vide\n";
    }
    else 
        cout<<"La pile n'est pas vide\n";
    cout<<"Le sommet de la pile "<<p.sommet()<<endl;
    Pile k(p) ,g;
    p.empiler(4);
    k.affiche();
    g = k = p;
    cout<<"L'operateur =  \n";
    g.affiche();
    Pile v(7);int d;
    char exp[] = "56+2*";  // équivalent à (5 + 6) * 2 = 22
    int resultat = v.evaluation_postfix(exp, strlen(exp));
    cout << "Le resultat de l'expression en postfixe : " << resultat << endl;
     const char* infixe = "(5+6)*2";
    char postfixe[100];

    v.infix_to_postfix(infixe, postfixe);
    cout << "Postfixe : " << postfixe << endl;
    resultat = v.evaluation_postfix(postfixe, strlen(postfixe));
    cout << "Le resultat de l'expression en postfixe : " << resultat << endl;

}

