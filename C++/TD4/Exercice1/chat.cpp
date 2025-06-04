#include "chat.h"
chat::chat(string  noom ):mamifere(noom){
        cout<<"\n Appel du const du chat "<<nom;
    }
    chat::~chat(){
        cout<<"\n destructeur du chat\t"<<nom;
    }
     void chat::s_exprime(){
        cout<<nom<<"  est un chat et s'exprime par <<miaou>>\n";
    }