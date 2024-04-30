#ifndef STAFF_H
#define STAFF_H
#include <string>
#include <iostream>
#include "Angajati.h"
class Staff {
private:
    Angajati *angajat;
public:

    explicit Staff(Angajati *angajat)
        : angajat(angajat) {
    }
    friend std::ostream &operator<<(std::ostream  &out, const Staff &staff) {
        out<< staff.getNume();

    }
    void afisare() const {
        angajat->afisare();
    }
    void aptitudini() const{
        angajat->aptitudini();
    }
    int getSalariu() const {
        return angajat->getSalariu();
    }
    const  std::string &getNume() const {
        return angajat->getNume();
    }

    ~Staff() = default;
};
#endif //STAFF_H
