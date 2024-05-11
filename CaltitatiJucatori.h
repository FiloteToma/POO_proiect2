#ifndef CALTITATIJUCATORI_H
#define CALTITATIJUCATORI_H
#include <iostream>


class CalitatiJucatori{
public:
    CalitatiJucatori() = default;

    virtual void setPlonjare(int p){};
    virtual void setGrip(int g){};
    virtual void setDribling(int d){};
    virtual void setViteza(int v){};
    virtual void setForta(int f){};
    virtual void setPicior(std::string pic){};
    virtual void NotaJucator()=0;
    virtual void afisare_caracteristici()  const=0;

    virtual ~CalitatiJucatori() = default;
};


#endif
