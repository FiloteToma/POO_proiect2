#include <iostream>
#include "fct.h"
#include "jucatori.h"
#include "Echipe.h"
#include "Staff.h"
#include "Jucator.h"
#include "Portar.h"
#include "Atacant.h"
#include "Mijlocas.h"
#include "Fundas.h"
int main() {

    // fct::meniu();
    Portar *p;
    p=new Portar("Aaron Ramsdale",2000,5,5,3,"Bun");
    Fundas *f;
    f=new Fundas("William Saliba",2000,4,4,1,"Bun");
    Echipe echipa1("Arsenal1","Mikel Arteta",2000,{},0,2,{p,f},0);
    Portar *p1;
    p1=new Portar("Aaron Ramsdale",2000,1,1,1,"Bun");
    Fundas *f1;
    f1=new Fundas("William Saliba",2000,4,4,1,"Bun");
    Echipe echipa2("Arsenal2","Mikel Arteta",2000,{},0,2,{p1,f1},0);
    echipa1.Punctaj();
    echipa2.Punctaj();
    fct::Castigatoare(echipa1,echipa2);


}