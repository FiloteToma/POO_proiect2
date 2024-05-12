#ifndef ATACANT_H
#define ATACANT_H
#include"Jucator.h"
#include "CaltitatiJucatori.h"

class Atacant: public Jucator,public CalitatiJucatori{
protected:
    int dribling;
    int viteza;
    int forta;
    std::string eficienta;
public:
    Atacant(const std::string &nume, int salariu, int dribling=0, int viteza=0, int forta=0,std::string eficienta="")
        : Jucator(nume, salariu),
          dribling(dribling),
          viteza(viteza),
          forta(forta),
          eficienta(eficienta) {
    }

    void setForta(int f) override;
    void setViteza(int v) override;
    void setDribling(int d) override;
    void NotaJucator() override;
    const std::string &getEficienta();
    void afisare_pozitie() const override;
    void afisare_caracteristici() const override;

    ~Atacant() override = default;
};

#endif
