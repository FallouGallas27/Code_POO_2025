#include "MatriceCreuse.h"

int main(){
   matrice mat;
   mat.l = 4;
   mat.c = 5;
   mat.m = new int*[4];
   for (int  i = 0; i < 4; i++)
   {
        mat.m[i] = new int [5];
   }
   mat.m[0][0] = 0; mat.m[0][1] = 0; mat.m[0][2] = 3; mat.m[0][3]= 0; mat.m[0][4] = 4;
   mat.m[1][0] = 0; mat.m[1][1] = 0; mat.m[1][2] = 5; mat.m[1][3]= 7; mat.m[1][4] = 0;
   mat.m[2][0] = 0; mat.m[2][1] = 0; mat.m[2][2] = 0; mat.m[2][3]= 0; mat.m[2][4] = 0;
   mat.m[3][0] = 0; mat.m[3][1] = 2; mat.m[3][2] = 6; mat.m[3][3]= 0; mat.m[3][4] = 0;
   for (int i = 0; i < 4; i++)
   {
        for (int j = 0; j < 5; j++)
        {
            cout<<mat.m[i][j]<<" ";
        }
        cout<<endl;
   }
   MatriceCreuse matrix(mat);
   matrix.affiche();
}