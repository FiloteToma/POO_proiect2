#ifndef FUNDAS_H
#define FUNDAS_H
#include"jucator.h"
#include "CaltitatiJucatori.h"

class Fundas: public Jucator,public CalitatiJucatori{
protected:
    int dribling;
    int viteza;
    int forta;
    std::string picior;
    std::string eficienta;
public:
    Fundas(const std::string &nume, int salariu, int dribling=0, int viteza=0, int forta=0,std::string picior="",
        std::string eficienta="")
        : Jucator(nume, salariu),
          dribling(dribling),
          viteza(viteza),
          forta(forta),
          picior(picior),
          eficienta(eficienta) {
    }

    void setDribling(int d) override;
    void setForta(int f) override ;
    void setPicior(std::string pic) override;
    void setViteza(int v) override;
    void NotaJucator() override;
    void afisare_pozitie() const override;
    void afisare_caracteristici() const override;
    const std::string &getEficienta();

    ~Fundas() override = default;
};

#endif //FUNDAS_H
