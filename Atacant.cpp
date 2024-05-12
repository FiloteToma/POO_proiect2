#include "Atacant.h"

void Atacant::setForta(int f) {
    forta=f;
};
void Atacant::setViteza(int v) {
    viteza=v;
};
void Atacant::setDribling(int d) {
    dribling=d;
};
void Atacant::NotaJucator() {
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
const std::string& Atacant::getEficienta(){
    return eficienta;
};
void Atacant::afisare_pozitie() const {
    std::cout<<"Atacant: ";
    Jucator::afisare_pozitie();
};
void Atacant::afisare_caracteristici() const{
    std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Viteza: "<<viteza<<", Forta: "<<forta<<std::endl;
};