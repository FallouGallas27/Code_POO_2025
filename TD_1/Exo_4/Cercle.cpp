#include <iostream>
#include <cmath>
#include "Cercle.h"

using namespace std;

Cercle::Cercle(unsigned int r, unsigned int x, unsigned int y) {
    rayon = r;
    centre.x = x;
    centre.y = y;
}

unsigned int Cercle::GetRayon() const {
    return rayon;
}

Centre Cercle::GetCentre() const {
    return centre;
}

unsigned int Cercle::perimetre() const {
    return 2 * M_PI * rayon;
}


float Cercle::surface() const {
    return M_PI * rayon * rayon;
}

void Cercle::SetRayon(unsigned int r) {
    rayon = r;
}

void Cercle::SetCentre(Centre c) {
    centre = c;
}

bool Cercle::Compare(const Cercle& autre) const {
    return rayon == autre.rayon &&
           centre.x == autre.centre.x &&
           centre.y == autre.centre.y;
}

void Cercle::afficher() const {
    const int diametre = 2 * rayon + 1;
    for (int y = 0; y < diametre; ++y) {
        for (int x = 0; x < diametre; ++x) {
            int dx = x - rayon;
            int dy = y - rayon;
            // Si le point est proche du cercle, on trace
            if (abs(dx * dx + dy * dy - rayon * rayon) <= rayon) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}


bool Cercle::operator==(const Cercle& autre) const {
    return Compare(autre);
}

ostream& operator<<(ostream& os, const Cercle& c) {
    const int diametre = 2 * c.rayon + 1;
    for (int y = 0; y < diametre; ++y) {
        for (int x = 0; x < diametre; ++x) {
            int dx = x - c.rayon;
            int dy = y - c.rayon;
            // Si le point est proche du cercle, on trace
            if (abs(dx * dx + dy * dy - c.rayon * c.rayon) <= c.rayon) {
                os << "*";
            } else {
                os << " ";
            }
        }
        std::cout << endl;
    }

    return os;
}

