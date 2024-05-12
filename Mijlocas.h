#ifndef MIJLOCAS_H
#define MIJLOCAS_H
#include"jucator.h"
#include "CaltitatiJucatori.h"

class Mijlocas: public Jucator,public CalitatiJucatori{
protected:
    int dribling;
    int viteza;
    int forta;
    std::string picior;
    std::string eficienta;
public:
    Mijlocas(const std::string &nume, int salariu, int dribling=0, int viteza=0, int forta=0,std::string picior="",
        std::string eficienta="")
        : Jucator(nume, salariu),
          dribling(dribling),
          viteza(viteza),
          forta(forta),
          picior(picior),
          eficienta(eficienta) {
    }

    void setForta(int f) override;
    void setViteza(int v) override;
    void setDribling(int d) override;
    void setPicior(std::string pic) override;
    void NotaJucator() override;
    void afisare_pozitie() const override;
    const std::string &getEficienta();
    void afisare_caracteristici() const override;

    ~Mijlocas() override = default;
};

#endif
