#include"Ensemble.h"
Ensemble& Ensemble::operator<<(int n){
    
    if(*this%n==false){
        if(m_elements==0){
        tab[m_elements]=n;
        m_elements++;
    }
    else if (m_elements<max)
    {
      
        this->tab[m_elements]=n;
          m_elements++;
    }
    else{
        cout<<"la taille  max est atteinte\n";
    }
    }
    else 
    cout<<"\nL'element est deja ajoute\n";
    return *this;
    }
    Ensemble& Ensemble::operator>>(int n ){
        int i=0;
            while (i<m_elements && tab[i]!=n)
    {  
        i++;
    }
    if(i<m_elements){
    for(int j=i;j<m_elements;j++){
        tab[j]=tab[j+1];
    }
            m_elements--;
    }
    else 
    cout<<"L'element que vous voulez supprimer n'est pas dans l'ensemble\n";
    return *this;
    }
Ensemble Ensemble::operator+(const Ensemble&p){
    Ensemble b;int j=0;
    b.max=max+p.max;
    b.m_elements=p.m_elements+m_elements;
    b.tab=new int[b.max];
    for(int i=0;i<b.m_elements;i++){
        if(i<m_elements){
            b.tab[i]=tab[i];
        }
        else{
            b.tab[i]=p.tab[j++];
        }
    }
    return b;
}
Ensemble Ensemble:: operator*(const Ensemble& p){
    Ensemble e;int k=0;
    e.max=max+p.max;
    e.m_elements=m_elements;
    e.tab=new int[max];
    while (k<m_elements){
    for(int i=0;i<m_elements;i++){
        for(int j=0;j<p.m_elements;j++){
            if(tab[i]==p.tab[j])
              e.tab[k++]=tab[i];
        }
    }
    }
    return e;
}
 void Ensemble::init(){
    int i=0;
    while (i<m_elements)
    {
        i++;
    }
    
 }

bool Ensemble::operator %(int n){
    int i=0;
    while(i<m_elements&&tab[i]!=n)
       i++;
    if(i<m_elements)
    return true;
    else return false;
}
void Ensemble::afficher(){
    int k=cardinal();cout<<"E="<<"[";
    for(int i=0;i<k;i++){
      cout<<tab[i]<<",";
    }cout<<"]";
}
int Ensemble:: cardinal()const{
    return m_elements;
}