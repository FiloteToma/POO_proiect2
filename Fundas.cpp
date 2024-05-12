#include "Fundas.h"

void Fundas::setDribling(int d){
    dribling=d;
};
void Fundas::setForta(int f) {
    forta=f;
};
void Fundas::setPicior(std::string pic) {
    picior=pic;
};
void Fundas::setViteza(int v) {
    viteza=v;
};
void Fundas::NotaJucator() {
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
void Fundas::afisare_pozitie() const {
    if(picior=="Stangu")
        std::cout<<"Fundas Stanga: ";
    else if(picior=="Dreptu")
        std::cout<<"Fundas Dreapta: ";
    else
        std::cout<<"Fundas Central: ";
    Jucator::afisare_pozitie();
};
void Fundas::afisare_caracteristici() const{
    std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Viteza: "<<viteza<<", Forta: "<<forta<<std::endl;
};
const std::string& Fundas::getEficienta(){
    return eficienta;
};