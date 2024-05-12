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
    void afisare() const;
    void aptitudini() const;
    int getSalariu() const;
    const  std::string &getNume() const;
    const int &getAptitudini();
    ~Staff() = default;
};
#endif //STAFF_H
