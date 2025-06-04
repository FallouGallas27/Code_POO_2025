#include <iostream>
#include <cstring>

using namespace std;

struct traduction 
{
    char* mot1;
    char* mot2;
};
class Dictionnaire
{
private:
    traduction ** tab;
    int taille;
public:
    Dictionnaire(int );
    ~Dictionnaire();
    void ajout(traduction *);
    char* DSearch(char*);
};


