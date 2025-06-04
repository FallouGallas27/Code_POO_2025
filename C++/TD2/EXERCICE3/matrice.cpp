#include"matrice.h"
matrice::matrice(int nb_ligne,int nb_colone)
{
    cout<<"\nConstruct . de la matrice\t"<<nb_ligne<<"  ligne\t"<<nb_colone<<"  colone"<<endl;
    m_ligne=nb_ligne;
    m_colone=nb_colone;
    mat=new int*[m_ligne];
    for(int i=0;i<m_ligne;i++){
       mat[i]=new int[m_colone];
    }
    for(int i=0;i<m_ligne;i++){
        for(int j=0;j<m_colone;j++){
            mat[i][j]=i+2;
        }
    }
}

matrice::~matrice()
{
    cout<<"\nDestruct . de la matrice "<<m_ligne<<" ligne "<<m_colone<<" colone"<<endl;
}
int matrice:: setElement(){
    int i,j;
    cout<<"donner la ligne \t";
    cin>>i;
    cout <<"donner la colone\t";
    cin>>j;
   return mat[i][j];
}
void matrice::getElement(int element ){
    int j,i;
    cout<<"donner la ligne \t";
    cin>>i;
    cout <<"donner la colone\t";
    cin>>j;
    mat[i][j]=element;
}
matrice matrice::produit_mat(const matrice& p){
    if(m_ligne!=p.m_colone)
        cout<<"Produit est impossible\n";
    matrice Mat(m_ligne,p.m_colone);
    for(int i=0;i<m_ligne;i++){
        for (int j = 0; j < p.m_colone; j++)
        {
         for (int k= 0; k < m_ligne; k++)
         {
            Mat.mat[i][j]+=mat[i][k]*p.mat[k][j];
         }
         
        }
        
    }
    
    return Mat;
}
void matrice::affiche(){
    for(int i=0;i<m_ligne;i++){
        cout<<"\n";
        for(int j=0;j<m_colone;j++){
            cout<<mat[i][j]<<"\t";
        }
    }
}
matrice::matrice(matrice& M){
    m_ligne=M.m_ligne;
    m_colone=M.m_colone;
    mat=new int*[m_ligne];
    for(int i=0;i<m_ligne;i++){
        mat[i]=new int [m_colone];
    }
    for (int  i = 0; i <m_ligne; i++)
    {
        for (int j  = 0; j<m_colone; j++)
        {
            mat[i][j]=M.mat[i][j];
        }
        
    }
    cout<<"\nAppel du constructeur de recopie\n";
}
int matrice::somme(){
    int som=0;
    for (int i = 0; i <m_ligne; i++)
    {
        for (int j = 0; j <m_colone; j++)
        {
            som+=mat[i][j];
        }
        
    }
    return som;
}
matrice& matrice::operator=(const matrice&P){
    if(this==&P) return *this;
    for(int i=0;i<m_ligne;i++)
       delete mat[i];
    delete mat;
    m_colone=P.m_colone;
    m_ligne=P.m_ligne;
    mat=new int*[m_ligne];
    for(int i=0;i<m_ligne;i++)
      mat[i]=new int [m_colone];
    for (int  i = 0; i <m_ligne; i++)
    {
        for (int j  = 0; j<m_colone; j++)
        {
            mat[i][j]=P.mat[i][j];
        }
        
    }
    return*this;
}
