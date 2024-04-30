//
// Created by filot on 28.04.2024.
//

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
    void afisare() const override {
        std::cout<<"Meserie: maseur";
        Angajati::afisare();
    }
    void aptitudini() const override {
        std::cout<<"Maseur-ul "<<this->Nume<<" este specializat pe grupa de muschi: "<<this->GrupaMuschi;
    }

    ~Maseur() override = default;
};



#endif //MASEUR_H
