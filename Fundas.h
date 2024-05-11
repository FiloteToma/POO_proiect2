//
// Created by filot on 11.05.2024.
//

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

    void setDribling(int d) override {
        dribling=d;
    };
    void setForta(int f) override {
        forta=f;
    };
    void setPicior(std::string pic) override {
        picior=pic;
    };
    void setViteza(int v) override {
        viteza=v;
    };
    void NotaJucator() override {
        int ok=0;
        if(viteza>2)
            ok++;
        if(dribling>2)
            ok++;
        if(forta>4)
            ok++;
        if(ok==3)
            eficienta="Foarte Bun";
        else if(ok==2)
            eficienta="Bun";
        else
            eficienta="Slab";
    };
    void afisare_pozitie() const override {
        if(picior=="Stangu")
            std::cout<<"Fundas Stanga: ";
        else if(picior=="Dreptu")
            std::cout<<"Fundas Dreapta: ";
        else
            std::cout<<"Fundas Central: ";
        Jucator::afisare_pozitie();
    };
    void afisare_caracteristici() const override{
        std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Viteza: "<<viteza<<", Forta: "<<forta<<std::endl;
    };

    ~Fundas() override = default;
};

#endif //FUNDAS_H
