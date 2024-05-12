#ifndef JUCATORI_H
#define JUCATORI_H
#include <string>
#include <iostream>

class Jucatori {
private:
    std::string  nume;
    int salariu_club;
public:
    Jucatori(std::string nume="", int salariu=0, int salariu_sponsor=0, int salariu_total=0) {
        this->nume = nume;
        this->salariu_club= salariu;

    }
    Jucatori (const Jucatori &juc)
    {
        this->nume=juc.nume;
        this->salariu_club=juc.salariu_club;

    }
    //Constructor de afisare
    friend std::ostream &operator<<(std::ostream &os, const Jucatori &jucatori) {
        os << "Nume: " << jucatori.nume << "| Salariu Club: " << jucatori.salariu_club;
        return os;
    }
    //Constructor de citire
    friend std::istream& operator>>(std::istream& is, Jucatori& other)
    {
        std::cout<<"Nume: ";
        is >> other.nume;
        std::cout<<"Salariu Club: ";
        is >> other.salariu_club;
        return is;
    }
    //operatori de atribuire
    Jucatori& operator=(const Jucatori& other)
    {

        this->nume = other.nume;
        this->salariu_club=other.salariu_club;
        return *this;


    }
    //functie de afisare
    void afis();
    const std::string &getNumeJucator() const
    {
        return nume;
    }
    const int &getSalariu();

    ~Jucatori() {}
};



#endif //JUCATORI_H