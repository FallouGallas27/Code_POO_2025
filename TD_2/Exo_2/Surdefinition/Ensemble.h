#include <iostream> 
using namespace std;
class Ensemble
{
private:
    int nmax;
    int card;
    int *tab;
    int cour;
public:
    Ensemble(int n = 0);
    ~Ensemble();
    Ensemble(Ensemble&);
    bool operator%(int);
    Ensemble& operator<<(int);
    Ensemble& operator>>(int);
    Ensemble& operator=(const Ensemble&);
    Ensemble operator+(const Ensemble&);
    Ensemble operator*(const Ensemble&);
    void init();
    int prochain();
    bool exist();
    void afficher();
};
