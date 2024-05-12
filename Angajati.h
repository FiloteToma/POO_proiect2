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
    virtual void afisare() const;
    int getSalariu() const;
    const std::string& getNume() const;
    virtual ~Angajati() = default;
};

#endif
