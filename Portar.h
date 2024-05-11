//
// Created by filot on 11.05.2024.
//

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
    void afisare_pozitie() const override {
        std::cout<<"Portar: ";
        Jucator::afisare_pozitie();
    };
    void afisare_caracteristici() const override{
        std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Grip: "<<grip<<", Plonjare: "<<plonjare<<std::endl;
    };
    void setPlonjare(int p) override {
        plonjare=p;
    };
    void setDribling(int d) override {
        dribling=d;
    };
    void setGrip(int g) override {
        grip=g;
    };
    void NotaJucator() override {
        int ok;
        ok=0;
        if(plonjare>3)
            ok++;
        if(grip>3)
            ok++;
        if(dribling>3)
            ok++;
        if(ok==3)
            eficienta="Foarte Bun";
        else if(ok==2)
            eficienta="Bun";
        else
            eficienta="Slab";
    };

    ~Portar() override = default;
};

#endif //PORTAR_H
