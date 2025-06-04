#include "Vecteur.h"

int main(){
    Vecteur<int, 5> V1;
    try
    {
        /* code */
    
    V1[0] = 1;
    V1[1] = 3;
    V1[2] = 4;
    V1[3] = 9;
    V1[4] = 8;
    for (int i = 0; i < 6; i++)
    {
        cout<<V1[i]<<" ";
    }
    cout<<endl;
    }
    catch(ErrorIndice& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Vecteur<double, 4> V2;
        V2[0] = 3.1;
        V2[1] = 2.1;
        V2[2] = 5.1;
        V2[3] = 8.1;
        for (int i = 0; i < 4; i++)
        {
            cout<<V2[i]<<" ";
        }
        cout<<endl;
    }
    catch(ErrorIndice& e)
    {
        std::cerr << e.what() << '\n';
    }
    Vecteur <char, 7> V3;
    try
    {
        V3[0] = 'w';
        V3[1] = 'e';
        V3[2] = '2';
        V3[3] = '5';
        V3[4] = 'g';
        V3[5] = '0';
        V3[6] = 'k';
        for (int i = 0; i < 7; i++)
        {
            cout<<V3[i]<<" ";
        }
        cout<<endl;
            /* code */
    }
    catch(ErrorIndice& e)
    {
        std::cerr << e.what() << '\n';
    }
}