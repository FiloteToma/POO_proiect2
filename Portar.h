#ifndef PORTAR_H
#define PORTAR_H
#include <iostream>
#include "jucator.h"
#include "CaltitatiJucatori.h"

class Portar: public Jucator, public CalitatiJucatori{
protected:
    int dribling;
    int grip;
    int plonjare;
    std::string eficienta;
public:
    Portar(const std::string &nume, int salariu, int dribling=0, int grip=0, int plonjare=0,std::string eficienta="")
        : Jucator(nume, salariu),
          dribling(dribling),
          grip(grip),
          plonjare(plonjare),
          eficienta(eficienta) {
    }

    void afisare_pozitie() const override;
    void afisare_caracteristici() const override;
    void setPlonjare(int p) override;
    void setDribling(int d) override;
    void setGrip(int g) override;
    void NotaJucator() override;
    const std::string &getEficienta();

    ~Portar() override = default;
};

#endif
