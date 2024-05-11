#ifndef ECHIPE_H
#define ECHIPE_H
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Staff.h"
#include "jucatori.h"
#include "Angajati.h"
#include "Jucator.h"
#include "Portar.h"



class Echipe {
private:

    std::string NumeEchipa;
    std::string Antrenor;
    int SalariuAntrenor;
    std::vector<Staff> staff;
    int NumarStaff;
    int NumarJucatori;
    std::vector<Jucator> jucator;
    int BugetStafff;

public:
    Echipe(const std::string &nume_echipa="", const std::string &antrenor="", int salariu_antrenor=0,
        const std::vector<Staff> &staff={}, int numar_staff=0, int numar_jucatori=0, const std::vector<Jucator> &jucator={},
        int buget_stafff=0)
        : NumeEchipa(nume_echipa),
          Antrenor(antrenor),
          SalariuAntrenor(salariu_antrenor),
          staff(staff),
          NumarStaff(numar_staff),
          NumarJucatori(numar_jucatori),
          jucator(jucator),
          BugetStafff(buget_stafff){
    }


    //constructor de afisare
    friend std::ostream &operator<<(std::ostream  &out, const Echipe &echipe) {
        out << "Numele echipei: " << echipe.NumeEchipa << std::endl;
        if(echipe.SalariuAntrenor!=0)
            out << "Antrenor: "<< echipe.Antrenor<<" | Salariu: "<<echipe.SalariuAntrenor<<std::endl;
        else
            std::cout<<"Echipa nu are antenor!"<<std::endl;

        if(echipe.NumarStaff>0)
        { out << "Staff: "<<std::endl;
            for(int i=0;i<echipe.NumarStaff;i++)
                echipe.staff[i].afisare();
    }
        else
            std::cout<<"Echipa nu are staff!"<<std::endl;





        if(echipe.NumarJucatori>0)
        {   out<<"Jucatori: "<<std::endl;
            for(int i=0;i<echipe.NumarJucatori;i++)
                echipe.jucator[i].afisare_caracteristici();

        }
        else
            std::cout<<"Echipa nu are jucatori!"<<std::endl;
        return out;
    }
    //constructor de citire
    friend std::istream& operator>>(std::istream& is, Echipe& other)
    {
        std::cout<<"Nume Echipa: ";
        is>> other.NumeEchipa;
        return is;

    }
    //Angajare jucator
    void AdaugareJucator(const Jucator &juc);
    //Suma salarilor angajatilor din club
    int BugetSalarii();
    //Suma salariilor jucatorilor
    int BugetSalariiJucatori();
    void SchimbareAntrenor(const std::string &NumeAntrenor,const int &salariu);
    void SchimbareSalariuAntrnor(const int &salariu);
    const int& getSalariuAntrenor();
    const std::string &getNumeleAntrenorului();
    //Angajare staff
    void AdaugareStaff(const Staff &staf);
    //concediere Staff
    void ConcediereStaff(const std::string &ConcedireStaff);
    const Staff &getStaff(const int &numar);
    const int &getNumarStaff();
    const Jucator &getJucator(const int &numar);
    const int &getNumarJucatori();
    const int &getBugetStafff();
    void BugetStaff(Angajati &angajati);
    const Staff& getStaff(const int &numar) const
    {
        return staff[numar];
    }
    void ConcediereStaff(const int &numar);
    void Aptitudini(const int &numar);


    ~Echipe() = default;
};




#endif //ECHIPE_H