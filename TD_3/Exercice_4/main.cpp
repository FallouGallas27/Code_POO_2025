#include "Vectb.h"
using namespace std;

int main(){
    Vect V(7);
    V[0] = 9;
    V[1] = 7;
    V[2] = 5;
    V[3] = 4;
    V[4] = 3;
    V[5] = 2;
    V[6] = 1;
    Vectb V1(2,7);
    cout<<V1[2]<<" " ;
    cout<<V1[3]<<" " ;
    cout<<V1[4]<<" " ;
    cout<<V1[5]<<" " ;
    cout<<V1[6]<<" "<<endl ;
}
