#include <iostream>
using namespace std;

class str
{
private:
    int longueur;
    char * chaine;
public:
    str(/* args */);
    str(char *);
    str(str&);
    ~str();
    void affiche();
    str& operator=(const str&);
    bool operator==(const str&);
    str operator+(const str&);
    char& operator[](int);
};
