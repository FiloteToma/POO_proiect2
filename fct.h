//
// Created by filot on 26.04.2024.
//

#ifndef FCT_H
#define FCT_H
#include "Echipe.h"
#include "jucatori.h"



class fct {
private:
public:
    static void meniu0();
    static void meniu1();
    static void meniu2();
    static void meniu3();
    static void meniu4();
    static void meniu5();
    static void meniu();
    static void Castigatoare(Echipe echipa1, Echipe echipa2){
        if(echipa1.getPunctaj()>echipa2.getPunctaj())
            std::cout<<echipa1.getNumeleEchipei();
        else
            std::cout<<echipa2.getNumeleEchipei();

    }
    static void VerificareCastigator() {
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
        fct() = default;

};



#endif //FCT_H
