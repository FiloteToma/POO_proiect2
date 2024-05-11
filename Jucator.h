//
// Created by filot on 11.05.2024.
//

#ifndef JUCATOR_H
#define JUCATOR_H
#include <iostream>


class Jucator {
    protected:
    std::string nume;
    int salariu;
    public:
    Jucator(const std::string &nume="", int salariu=0)
        : nume(nume),
          salariu(salariu) {
    }

    virtual void afisare_pozitie() const {
        std::cout<<"Nume: "<<nume<<" , Salariu: "<< salariu<<std::endl;
    };

    const int &getSalariu() {
        return salariu;
    };
    friend std::ostream &operator<<(std::ostream &os, const Jucator &jucatori) {
        os << "Nume: " << jucatori.nume << "| Salariu: " << jucatori.salariu;
        return os;
    }
    virtual void afisare_caracteristici()  const{};
    ~Jucator() = default;
};



#endif //JUCATOR_H
