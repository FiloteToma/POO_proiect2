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
    fct() = default;
};



#endif //FCT_H
