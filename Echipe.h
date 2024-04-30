#ifndef ECHIPE_H
#define ECHIPE_H
#include <string>
#include <iostream>
#include <vector>
#include "Staff.h"
#include "jucatori.h"


class Echipe {
private:

    std::string NumeEchipa;
    std::string Antrenor;
    int SalariuAntrenor;
    std::vector<Staff> staff;
    int NumarStaff;
    int NumarJucatori;
    std::vector<Jucatori> jucatori;

public:

    Echipe(const std::string numeEchipa="",const std::string antrenor="",int salariu_antrenor=0,const std::vector<Staff>& staff={},int Numar_staf=0, int numarJucatori=0, const std::vector<Jucatori>& jucatori={}) : NumeEchipa(
            numeEchipa),Antrenor(antrenor),SalariuAntrenor(salariu_antrenor),staff(staff),NumarStaff(Numar_staf), NumarJucatori(numarJucatori),jucatori(jucatori)  {}


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
            for (int i = 0; i < echipe.NumarJucatori; i++)
                out << echipe.jucatori[i] << std::endl;
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
    //Angajarea unui nou jucator
    void AdaugareJucator(const Jucatori &jucator);
    //concedierea unui jucator
    void ConcediereJucator(const std::string &ConcediereJucator);
    //Transferul unui jucator de la o echipa la alta
    void TransferJucator(Echipe &echipa, const Jucatori &jucator);
    //Suma salarilor staffului
    int BugetStaff();
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
    const Jucatori &getJucatori(const int &numar);
    const int &getNumarJucatori();
    const Staff& getStaff(const int &numar) const
    {
        return staff[numar];
    }



    ~Echipe() {

    }
};




#endif //ECHIPE_H
