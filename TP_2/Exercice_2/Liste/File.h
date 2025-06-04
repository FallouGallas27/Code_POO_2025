#include <iostream>
using namespace std;

struct Liste
{
    int elemt;
    Liste *suiv;
};
class File
{
private:
    Liste *tete;
    Liste *queue;
public:
    File();
    ~File();
    void enfiler(int);
    int defiler();
    int Tete();
    bool est_vide();
    void affiche();
    File(const File& autre);
    File& operator=(const File& autre);
    void guichet(const File&);
};
