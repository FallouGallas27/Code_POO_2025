#include"str.h"
 str:: str(char *mot){
     int n=strlen(mot)+1;
     m_longueur=n;
     chaine=new char[m_longueur];
     for(int i=0;i<m_longueur;i++){
        chaine[i]=mot[i];
     }
    
 }
 void affiche(const str& t){
   // for(int i=0;i<t.m_longueur;i++){
        cout<<t.chaine;
   //}
 }
str ::str(str& t){
    m_longueur=t.m_longueur;
    chaine=new char[m_longueur];
    for(int i=0;i<m_longueur;i++){
        chaine[i]=t.chaine[i];
    }
}
str& str::operator=(const str& t){
    if(this==&t) return *this;
    delete chaine;
    m_longueur=t.m_longueur;
    chaine=new char[m_longueur];
    for(int i=0;i<m_longueur-1;i++){
        chaine[i]=t.chaine[i];
    }
    return *this;
}
bool  str::operator==(const str& g){
    if(m_longueur!=g.m_longueur){
      return false;
    }
    else{
    int i=0;
    while (i<m_longueur&& chaine[i]==g.chaine[i])
           i++;
    
        if(i<m_longueur)
           return false;
          else{
            return true;
          }
    
    }
}
str str::operator+(const str & p){
    str a;
    a.m_longueur=m_longueur+p.m_longueur;
    a.chaine=new char[a.m_longueur];
    int i,j=0;
    for(i=0;i<a.m_longueur;i++){
        if(i<m_longueur)
           a.chaine[i]=chaine[i];
        else
        a.chaine[i]=p.chaine[j++];
    }
    return (a);
}
char& str::operator[](int i){
    if(i<0||i>=m_longueur){
      cout<<"Mauvaise incdice\n";
      exit (1);
    }
    else
    return chaine[i];
}
