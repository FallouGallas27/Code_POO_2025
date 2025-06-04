#include"chat.h"
#include"canari.h"
#include"souris.h"
#include"oiseau.h"
#include"liste.h"
int main(){
    chat c("Tom") ,b("Sylvestre");
    souris s("Jerry");
    canari k("Titi");
    liste l(10);
    l.ajouter(&s);
    l.ajouter(&c);
    l.ajouter(&b);
    l.ajouter(&k);
    l.s_exprime();
}