class TabPointeur
{
private:
    int **tab;
    int taille;
public:
    TabPointeur(int);
    TabPointeur();
    ~TabPointeur();
    TabPointeur(const TabPointeur&);
    void ajout(int*);
    void supprimer(int);
    void affiche();
    TabPointeur& operator=(const TabPointeur&);
};

