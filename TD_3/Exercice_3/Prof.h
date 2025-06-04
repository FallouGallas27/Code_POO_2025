#ifndef PROF_H
#define PROF_H
#include<stdexcept>
#include "Salarie.h"
class Erreurindice : public exception{
private:
    int idx;
    string message;
public:
    Erreurindice(int hors):idx(hors){
        message = "Erreur d'indice " + to_string(idx);
    }
    const char* what(){
        return message.c_str();
    }
};

class Prof :public Salarie
{
private:
    string diplome;
    string  *matiere[10];
public:
    Prof(string,string, string);
    ~Prof();
    string getDiplome()const;
    string& iemeMatiere(int);
    void ajoutMatiere(string);
    Prof(const Prof&);
    Prof& operator=(Prof&);
};
#endif
