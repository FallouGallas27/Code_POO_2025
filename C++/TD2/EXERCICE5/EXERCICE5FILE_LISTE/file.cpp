#include"file.h"
void file::enfiler(int n){
    Liste p=new noeud;
    p->val=n;
    p->suiv=nullptr;
    if(tete==nullptr&&queue==nullptr)
     tete=queue=p;
    else{ queue=tete;
        while (queue->suiv!=nullptr)
        {
            queue=queue->suiv;
        }
        queue->suiv=p;
        queue=p;
        
    }
}
int file::defiler(){
    if(!filevide())
      return tete->val;
    return 0;
}
int file::tetefile(){
    return tete->val;
}
bool file::filevide(){
    if(tete==nullptr&&queue==nullptr)
       return true;
    return false;
}
void file::affiche(){
    queue=tete;
    while(queue!=nullptr){
        cout<<queue->val<<"\t";
        queue=queue->suiv;
    }
}
