#ifndef MASEUR_H
#define MASEUR_H
#include "Angajati.h"
#include <iostream>


class Maseur: public Angajati {
protected:
    std::string GrupaMuschi;
public:
    Maseur(const std::string &nume, int salariu, const std::string &grupa_muschi)
        : Angajati(nume, salariu),
          GrupaMuschi(grupa_muschi) {
    }

    void afisare() const override;
    void aptitudini() const override;

    ~Maseur() override = default;
};

#endif
