#include "Portar.h"

void Portar::afisare_pozitie() const{
    std::cout<<"Portar: ";
    Jucator::afisare_pozitie();
}
void Portar::afisare_caracteristici() const{
    std::cout<<"Eficienta: "<<eficienta<<", Dribling: "<<dribling<<", Grip: "<<grip<<", Plonjare: "<<plonjare<<std::endl;
}
void Portar::setPlonjare(int p) {
    plonjare=p;
}
void Portar::setDribling(int d){
    dribling=d;
}
void Portar::setGrip(int g){
    grip=g;
}
void Portar::NotaJucator(){
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
}
const std::string& Portar::getEficienta(){
    return eficienta;
}
