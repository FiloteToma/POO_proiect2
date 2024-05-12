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
#include "Fundas.h"
#include "Atacant.h"
#include "Mijlocas.h"




class Echipe {
private:

    std::string NumeEchipa;
    std::string Antrenor;
    int SalariuAntrenor;
    std::vector<Staff> staff;
    int NumarStaff;
    int NumarJucatori;
    std::vector<Jucator*> jucator;
    int BugetStafff;
    int Punctajj;

public:
    Echipe(const std::string &nume_echipa="", const std::string &antrenor="", int salariu_antrenor=0,
        const std::vector<Staff> &staff={}, int numar_staff=0, int numar_jucatori=0, const std::vector<Jucator *> &jucator={},
        int buget_stafff=0, int punctaj=0)
        : NumeEchipa(nume_echipa),
          Antrenor(antrenor),
          SalariuAntrenor(salariu_antrenor),
          staff(staff),
          NumarStaff(numar_staff),
          NumarJucatori(numar_jucatori),
          jucator(jucator),
          BugetStafff(buget_stafff),
          Punctajj(punctaj) {
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
            int ok=0;
            for(int i=0;i<echipe.NumarJucatori;i++)
                {
                Portar *p=dynamic_cast<Portar*>(echipe.jucator[i]);
                if(p!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    p->afisare_pozitie();
                }
                }
            for(int i=0;i<echipe.NumarJucatori;i++)
            {
                Fundas *f=dynamic_cast<Fundas*>(echipe.jucator[i]);
                if(f!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    f->afisare_pozitie();
                }
            }
            for(int i=0;i<echipe.NumarJucatori;i++)
            {
                Mijlocas *m=dynamic_cast<Mijlocas*>(echipe.jucator[i]);
                if(m!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    m->afisare_pozitie();
                }
            }
            for(int i=0;i<echipe.NumarJucatori;i++)
            {
                Atacant *a=dynamic_cast<Atacant*>(echipe.jucator[i]);
                if(a!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    a->afisare_pozitie();
                }
            }

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
    void AfisareJucatori() {
        if(NumarJucatori>0)
        {   std::cout<<"Jucatori: "<<std::endl;
            int ok=0;
            for(int i=0;i<NumarJucatori;i++)
            {
                Portar *p=dynamic_cast<Portar*>(jucator[i]);
                if(p!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    p->afisare_pozitie();
                }
            }
            for(int i=0;i<NumarJucatori;i++)
            {
                Fundas *f=dynamic_cast<Fundas*>(jucator[i]);
                if(f!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    f->afisare_pozitie();
                }
            }
            for(int i=0;i<NumarJucatori;i++)
            {
                Mijlocas *m=dynamic_cast<Mijlocas*>(jucator[i]);
                if(m!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    m->afisare_pozitie();
                }
            }
            for(int i=0;i<NumarJucatori;i++)
            {
                Atacant *a=dynamic_cast<Atacant*>(jucator[i]);
                if(a!=nullptr) {
                    ok++;
                    std::cout<<ok<<". ";
                    a->afisare_pozitie();
                }
            }
            std::cout<<std::endl;
        }
        else
            std::cout<<"Echipa nu are jucatori!"<<std::endl;

    }

    //Punctajul echipei
    int Punctaj() {
        Punctajj=0;


        for(int i=0;i<NumarJucatori;i++)
            {
                Portar *p=dynamic_cast<Portar*>(jucator[i]);
                if(p!=nullptr) {
                    if(p->getEficienta()=="Foarte Bun")
                        Punctajj=Punctajj+2;
                    else if(p->getEficienta()=="Bun")
                        Punctajj++;
                    }
                }

        for(int i=0;i<NumarJucatori;i++)
        {
            Fundas *f=dynamic_cast<Fundas*>(jucator[i]);
            if(f!=nullptr) {
                if(f->getEficienta()=="Foarte Bun")
                    Punctajj=Punctajj+2;
                else if(f->getEficienta()=="Bun")
                    Punctajj++;
                }
        }

        for(int i=0;i<NumarJucatori;i++)
        {
            Mijlocas *m=dynamic_cast<Mijlocas*>(jucator[i]);
            if(m!=nullptr) {
                if(m->getEficienta()=="Foarte Bun")
                   Punctajj=Punctajj+2;
                else if(m->getEficienta()=="Bun")
                    Punctajj++;
                }
            }

        for(int i=0;i<NumarJucatori;i++)
        {
            Atacant *a=dynamic_cast<Atacant*>(jucator[i]);
            if(a!=nullptr) {
                if(a->getEficienta()=="Foarte Bun")
                    Punctajj=Punctajj+2;
                else if(a->getEficienta()=="Bun")
                    Punctajj++;
            }
        }
        return Punctajj;
    }
    void Castigatoare(Echipe echipa1, Echipe echipa2){
        if(echipa1.getPunctaj()>echipa2.getPunctaj())
            std::cout<<echipa1.getNumeleEchipei();
        else
            std::cout<<echipa2.getNumeleEchipei();

    }
    //Angajare jucator
    void AdaugareJucator(Jucator *juc);
    //concedierea unui jucator
    void ConcediereJucator();
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
    const std::string &getNumeleEchipei() {
        return NumeEchipa;
    };
    int getPunctaj() {
        return Punctajj;
    };
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