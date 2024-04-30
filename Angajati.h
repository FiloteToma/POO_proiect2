//
// Created by filot on 28.04.2024.
//

#ifndef ANGAJATI_H
#define ANGAJATI_H
#include <iostream>


class Angajati {
protected:
    std::string Nume;
    int salariu;
public:
    Angajati(const std::string &nume, int salariu)
        : Nume(nume),
          salariu(salariu) {
    }
    virtual void aptitudini() const=0;
    virtual void afisare() const {
        std::cout<<" | Nume: "<<Nume<<" | Salariu: "<<salariu<<std::endl;
    }
    int getSalariu() const { return salariu; }
    const std::string& getNume() const { return Nume; }

    virtual ~Angajati() = default;
};



#endif //ANGAJATI_H
