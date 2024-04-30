//
// Created by filot on 28.04.2024.
//

#ifndef BUCATAR_H
#define BUCATAR_H
#include <iostream>
#include "Angajati.h"


class Bucatar: public Angajati {
protected:
    int NumarPreparate;
public:
    Bucatar(const std::string &nume, int salariu, int numar_preparate)
        : Angajati(nume, salariu),
          NumarPreparate(numar_preparate) {
    }

    void afisare() const override {
        std::cout<<"Meserie: bucatar";
        Angajati::afisare();
    }
    void aptitudini() const override {
        std::cout<<"Bucatarul "<<this->Nume<<" poate face "<<this->NumarPreparate<<" preparate!";
    }

    ~Bucatar() override = default;
};



#endif //BUCATAR_H
