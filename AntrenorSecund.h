//
// Created by filot on 28.04.2024.
//

#ifndef ANTRENORSECUND_H
#define ANTRENORSECUND_H
#include <iostream>
#include"Angajati.h"


class AntrenorSecund: public Angajati {
protected:
    int EchipeAntrenate;
public:
    AntrenorSecund(const std::string &nume, int salariu, int echipe_antrenate)
        : Angajati(nume, salariu),
          EchipeAntrenate(echipe_antrenate) {
    }
    void afisare() const override {
        std::cout<<"Meserie: antrenor secund";
        Angajati::afisare();
    }
    void aptitudini() const override {
        std::cout<<"Antrenorul secund "<<this->Nume<<" a mai fost la "<<this->EchipeAntrenate<<" echipe inainte!";
    }


    ~AntrenorSecund() = default;
};



#endif //ANTRENORSECUND_H
