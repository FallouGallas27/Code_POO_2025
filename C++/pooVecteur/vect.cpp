#include"vect.h"
Vecteur::Vecteur(int n)
{
int i;
cout << "\nAppel du constructeur";
cout << " (adr = " << this << ")";
m_dimension = n;
m_x = new double[n];
for(i = 0; i < n; i++) m_x[i] = 0.0;
}
Vecteur::~Vecteur()
{
cout << "\nAppel du destructeur";
cout << " (adr = " << this << ")";
if (m_x) delete m_x;
}
double Vecteur::norme() {
double n = 0;
int i;
for(i = 0; i < m_dimension; i++) n += m_x[i] * m_x[i];
return(sqrt(n));
}
ostream& operator << (ostream& sortie, Vecteur &v) {
int i;
for(i = 0; i < v.m_dimension; i++) {
 if (i == 0) sortie << "< "; else sortie << ", "; 
 sortie << v.m_x[i];
}
sortie << " >";
return(sortie);
}
double Vecteur::operator * (Vecteur& v2) {
double p = 0;
int i;
if (this->m_dimension == v2.m_dimension) {
 for(i = 0; i < this->m_dimension; i++)
 p += this->m_x[i] * v2.m_x[i];
 return(p);
} else {
cout << "\nVecteur de dimensions differentes !";
return(0);
}
}
Vecteur Vecteur::operator + (Vecteur& v2) {
int min, i;
if (this->m_dimension != v2.m_dimension) {
 cout << "\nVecteurs de dimensions differentes ! » ";
 if (this->m_dimension > v2.m_dimension)
 min = v2.m_dimension;
 else
 min = this->m_dimension;
} else
 min = this->m_dimension;
Vecteur v(min);
for(i = 0; i < min; i++)
 v.m_x[i] = this->m_x[i] + v2.m_x[i];
return(v);
}
double& Vecteur::operator [] (int i) {
if ((0 > i) || (i >= m_dimension))
    cout << "\nAttention : mauvais indice";
    return ;
 else{
       return m_x[i];} 
}