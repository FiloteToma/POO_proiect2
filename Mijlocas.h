//
// Created by filot on 11.05.2024.
//

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
    void setForta(int f) override {
        forta=f;
    };
    void setViteza(int v) override {
        viteza=v;
    };
    void setDribling(int d) override {
        dribling=d;
    };
    void setPicior(std::string pic) override {
        picior=pic;
    };
    void NotaJucator() override {
        int ok=0;
        if(viteza>3)
            ok++;
        if(dribling>4)
            ok++;
        if(forta>2)
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
            std::cout<<"Mijlocas Stanga: ";
        else if(picior=="Dreptu")
            std::cout<<"Mijlocas Dreapta: ";
        else
            std::cout<<"Mijlocas Central: ";
        Jucator::afisare_pozitie();
    };
    const std::string &getEficienta(){
        return eficienta;
    };
    void afisare_caracteristici() const override{
        std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Viteza: "<<viteza<<", Forta: "<<forta<<std::endl;
    };
    ~Mijlocas() override = default;
};


#endif //MIJLOCAS_H
