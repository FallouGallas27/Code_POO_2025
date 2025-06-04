#include <iostream>

using namespace std;
class ErreurDim{
    public:
    int lig;
    int col;
    ErreurDim(int l, int c){
        lig = l;
        col = c;
    }
};
class MatriceCreuse
{
private:
    int ligne;
    int colone;
    int *M;
public:
    MatriceCreuse(int, int);
    ~MatriceCreuse();
    int& operator()(int,int);
};
