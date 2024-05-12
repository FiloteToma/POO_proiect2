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

    void afisare() const override;
    void aptitudini() const override;

    ~Bucatar() override = default;
};

#endif
