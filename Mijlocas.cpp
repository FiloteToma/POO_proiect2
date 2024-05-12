#include "Mijlocas.h"

void Mijlocas::setForta(int f){
    forta=f;
}
void Mijlocas::setViteza(int v) {
    viteza=v;
}
void Mijlocas::setDribling(int d) {
    dribling=d;
}
void Mijlocas::setPicior(std::string pic) {
    picior=pic;
}
void Mijlocas::NotaJucator() {
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
}
void Mijlocas::afisare_pozitie() const {
    if(picior=="Stangu")
        std::cout<<"Mijlocas Stanga: ";
    else if(picior=="Dreptu")
        std::cout<<"Mijlocas Dreapta: ";
    else
        std::cout<<"Mijlocas Central: ";
    Jucator::afisare_pozitie();
}
const std::string& Mijlocas::getEficienta(){
    return eficienta;
}
void Mijlocas::afisare_caracteristici() const{
    std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Viteza: "<<viteza<<", Forta: "<<forta<<std::endl;
}
