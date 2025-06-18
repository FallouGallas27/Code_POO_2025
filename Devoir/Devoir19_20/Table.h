#include<iostream>
#include <cstring>
using namespace std;
const int N = 10;
struct Document{
    char val[255];
    int cle;
    char **mot_cles;
};
class Table
{
private:
    int nbmax;
    int nbcourant;
    Document **doc;
public:
    Table(int );
    ~Table();
    void insertion(Document*);
    void supprimer(int);
    bool recherche(int);
    Table (const Table&);
    Table& operator=(const Table&);
    Table& operator<<(Document*);
    Table& operator>>(int);
    bool operator%(int);
    void affiche();
};
