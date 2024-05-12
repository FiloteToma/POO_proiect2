#ifndef ANTRENORSECUND_H
#define ANTRENORSECUND_H
#include <iostream>
#include"Angajati.h"

class AntrenorSecund: public Angajati {
protected:
    int EchipeAntrenate;
public:
    AntrenorSecund(const std::string &nume, int salariu, int echipe_antrenate)
        : Angajati(nume, salariu),
          EchipeAntrenate(echipe_antrenate) {
    }

    void afisare() const override;
    void aptitudini() const override;

    ~AntrenorSecund() = default;
};

#endif //ANTRENORSECUND_H
