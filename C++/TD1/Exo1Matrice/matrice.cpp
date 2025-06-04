#include"matrice.h"

Matrice* creer_matrice(int ligne,int colones){
    int j,i;
    Matrice *m=new(Matrice);
    if(m==NULL){
    cerr<<"manque d'espace"<<endl;
    return NULL;
    }
    m->nb_lignes=ligne;
    m->nb_cols=colones;
    m->elements=new float*[ligne];
    if(m->elements==NULL){
        cerr<<"manque d'espace"<<endl;
        return NULL;
    }
    for(i=0;i<ligne;i++){
        m->elements[i]=new float[colones];
        if(m->elements[i]==NULL){
        cerr<<"manque d'espace"<<endl;
        return NULL;
    }
    }
    for(i=0;i<ligne;i++){
        for(j=0;j<colones;j++){
            m->elements[i][j]=0.5*i;
        }
    }
    return m;
}
void detruire(Matrice *m){
    /*il faut desallouer ce qu'on a alloue exemple:A la ligne 5,12,18 donc faut desallouer ca
    !!!!!! c'est valable pour toutes fonction de destruction */
    if(m){
    if(m->elements){
        for(int i=0;i<m->nb_lignes;i++)
          delete m->elements[i];
    }
    delete m->elements;
    }
    delete m;
    cout<<"\nla destruction fonctionne bien\n";
}
void affiche_mat(Matrice *m){
    int i,j;
    for(i=0;i<m->nb_lignes;i++){
        cout<<endl;
        for(j=0;j<m->nb_cols;j++){
            cout<<m->elements[i][j]<<"\t";
        }
    }
}
Matrice* transpose_mat(Matrice*m){
    if(m){
    Matrice *M=creer_matrice(m->nb_lignes,m->nb_cols);
    //SI CREE QUELQUE CHOSE ,IL FAUT S'ASSURER QUE SA MARCHE;
    if(!M){
        cout<<"espace insuffisant\n";
        return NULL;
    }
    int i,j;
        for(i=0;i<m->nb_lignes;i++){
         for(j=0;j<m->nb_cols;j++){
            M->elements[j][i]=m->elements[i][j];
         }
        }
        return M;
    }
}
Matrice* produit_mat(Matrice* m,Matrice* g){
    if(m->nb_lignes!=g->nb_cols){
        cout<<"la multiplication est impossible \n";
        return NULL;
    }
    int i,j,k;
    Matrice *p=creer_matrice(m->nb_lignes,g->nb_cols);
    for(i=0;i<m->nb_lignes;i++){
        for(j=0;j<g->nb_cols;j++){
            for(k=i;k<m->nb_cols;k++){
                p->elements[i][j]+=m->elements[i][k]*g->elements[k][j];
            }
        }
    }
    return p;
}