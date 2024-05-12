//
// Created by filot on 11.05.2024.
//

#ifndef ATACANT_H
#define ATACANT_H
#include"Jucator.h"
#include "CaltitatiJucatori.h"
#include "Jucator.h"

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

    void setForta(int f) override {
        forta=f;
    };
    void setViteza(int v) override {
        viteza=v;
    };
    void setDribling(int d) override {
        dribling=d;
    };
    void NotaJucator() override {
        int ok=0;
        if(viteza>4)
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

    const std::string &getEficienta(){
        return eficienta;
    };
    void afisare_pozitie() const override {
        std::cout<<"Atacant: ";
        Jucator::afisare_pozitie();
    };
    void afisare_caracteristici() const override{
        std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Viteza: "<<viteza<<", Forta: "<<forta<<std::endl;
    };

    ~Atacant() override = default;
};




#endif //ATACANT_H
