//
// Created by filot on 26.04.2024.
//

#include "fct.h"
#include <iostream>

#include "AntrenorSecund.h"
#include "Bucatar.h"
#include "Echipe.h"
#include "Maseur.h"
#include "Echipe.h"

void fct::meniu0()
{
    std::cout<<"1.Antrenor"<<std::endl;
    std::cout<<"2.Staff"<<std::endl;
    std::cout<<"3.Jucatori"<<std::endl;
    std::cout<<"4.Afisare Echipa"<<std::endl;
    std::cout<<"5.Iesi din aplicatie"<<std::endl<<std::endl;
    std::cout<<"Alege:"<<std::endl;
}
void fct::meniu1() {
    std::cout<<"1.Angajare antrenor"<<std::endl;
    std::cout<<"2.Schimbare antrenor"<<std::endl;
    std::cout<<"3.Schimbare salariu antrenor"<<std::endl;
    std::cout<<"4.Afisare salariu antrenor"<<std::endl;
    std::cout<<"5.Afisare nume antrenor"<<std::endl;
    std::cout<<"6.Inapoi"<<std::endl<<std::endl;
    std::cout<<"Alege: "<<std::endl;

}
void fct::meniu2() {
    std::cout<<"1.Angajare nou membru staff"<<std::endl;
    std::cout<<"2.Concediere membru staff"<<std::endl;
    std::cout<<"3.Afisare buget staff"<<std::endl;
    std::cout<<"4.Afisare staff"<<std::endl;
    std::cout<<"5.Afisare aptitudini staff"<<std::endl;
    std::cout<<"6.Inapoi"<<std::endl<<std::endl;
    std::cout<<"Alege: "<<std::endl;

}
void fct::meniu3() {
    std::cout<<"1.Angajare nou jucator"<<std::endl;
    std::cout<<"2.Concediere jucator"<<std::endl;
    std::cout<<"3.Afisare buget jucatori"<<std::endl;
    std::cout<<"4.Afisare jucatori"<<std::endl;
    std::cout<<"5.Inapoi"<<std::endl<<std::endl;

}
void fct::meniu4() {
    std::cout<<"1.Angajare antrenor"<<std::endl;
    std::cout<<"2.Schimbare antrenor"<<std::endl;
    std::cout<<"3.Schimbare salariu antrenor"<<std::endl;
    std::cout<<"4.Afisare salariu antrenor"<<std::endl;
    std::cout<<"5.Afisare nume antrenor"<<std::endl;
    std::cout<<"6.Inapoi"<<std::endl<<std::endl;
    std::cout<<"Alege: "<<std::endl;

}
void fct::meniu5() {
    std::cout<<"1.Angajare antrenor"<<std::endl;
    std::cout<<"2.Schimbare antrenor"<<std::endl;
    std::cout<<"3.Schimbare salariu antrenor"<<std::endl;
    std::cout<<"4.Afisare salariu antrenor"<<std::endl;
    std::cout<<"5.Afisare nume antrenor"<<std::endl;
    std::cout<<"6.Inapoi"<<std::endl<<std::endl;
    std::cout<<"Alege: "<<std::endl;

}
void fct::meniu() {
    int alg;
    Echipe echipa;
    bool m= true;
    std::cin>>echipa;

    while (m)
    {



          meniu0();

        std::cin>>alg;
        switch (alg)
        {

            case 1:{

                        int alg1;
                        bool n= true;
                        while(n)
                        {
                            meniu1();
                            std::cin>>alg1;
                            switch (alg1)
                            {
                                case 1:
                                {
                                    std::string a;
                                    int b;
                                    std::cout<<"Numele antrenorului: ";
                                    std::cin>>a;
                                    std::cout<<"Salariu antrenor:";
                                    std::cin>>b;
                                    echipa.SchimbareAntrenor(a,b);
                                    break;
                                }
                                case 2:
                                {
                                    std::string a;
                                    int b;
                                    std::cout<<"Numele noului antrenorului: ";
                                    std::cin>>a;
                                    std::cout<<"Salariu noului antrenor:";
                                    std::cin>>b;
                                    echipa.SchimbareAntrenor(a,b);
                                    break;
                                }
                                case 3:
                                {
                                    std::cout<<"Noul salariu al antrenorului:";
                                    int a;
                                    std::cin>>a;
                                    echipa.SchimbareSalariuAntrnor(a);
                                    break;

                                }
                                case 4:
                                {
                                    if(echipa.getSalariuAntrenor()==0)
                                    {
                                        std::cout<<"Echipa nu are un antrenor"<<std::endl;
                                        break;

                                    }


                                    std::cout<<echipa.getSalariuAntrenor()<<std::endl;
                                    break;
                                }
                                case 5:
                                {
                                    std::cout<<echipa.getNumeleAntrenorului()<<std::endl;
                                    break;
                                }
                                case 6:
                                {
                                    n= false;
                                    break;
                                }

                            }
                        }
                break;
                    }
            case 2:
            {
                int alg1;
                bool n= true;
                while (n)
                {
                    meniu2();
                    std::cin>>alg1;
                    switch (alg1)
                    {
                        case 1:
                            {
                                int alg2;
                                bool w= true;
                                while (w) {
                                    std::cout<<"1.Angajeaza un bucatar!"<<std::endl;
                                    std::cout<<"2.Angajeaza un maseur!"<<std::endl;
                                    std::cout<<"3.Angajeaza un antrenor secundar!"<<std::endl;
                                    std::cout<<"4.Inapoi"<<std::endl;
                                    std::cout<<"Alege: "<<std::endl;
                                    std::cin>>alg2;
                                    switch (alg2) {
                                        case 1: {
                                            Angajati *angajati;
                                            std::string Nume;
                                            std::cout<<"Introduceti numele: ";
                                            std::cin>>Nume;
                                            int salariu;
                                            std::cout<<"Introduceti salariul: ";
                                            std::cin>>salariu;
                                            int preparate;
                                            std::cout<<"Introduceti numarul de preparate: ";
                                            std::cin>>preparate;
                                            angajati=new Bucatar(Nume,salariu,preparate);
                                            echipa.BugetStaff(*angajati);
                                            Staff staff(angajati);
                                            echipa.AdaugareStaff(staff);
                                            break;
                                        }
                                        case 2: {
                                            Angajati *angajati;
                                            std::string Nume;
                                            std::cout<<"Introduceti numele: ";
                                            std::cin>>Nume;
                                            int salariu;
                                            std::cout<<"Introduceti salariul: ";
                                            std::cin>>salariu;
                                            std::string preparate;
                                            std::cout<<"Introduceti grupa de muschi: ";
                                            std::cin>>preparate;
                                            angajati=new Maseur(Nume,salariu,preparate);
                                            echipa.BugetStaff(*angajati);
                                            Staff staff(angajati);
                                            echipa.AdaugareStaff(staff);
                                            break;
                                        }
                                        case 3: {
                                            Angajati *angajati;
                                            std::string Nume;
                                            std::cout<<"Introduceti numele: ";
                                            std::cin>>Nume;
                                            int salariu;
                                            std::cout<<"Introduceti salariul: ";
                                            std::cin>>salariu;
                                            int preparate;
                                            std::cout<<"Introduceti numarul de echipe la care a fost antrenor secund: ";
                                            std::cin>>preparate;
                                            angajati=new AntrenorSecund(Nume,salariu,preparate);
                                            echipa.BugetStaff(*angajati);
                                            Staff staff(angajati);
                                            echipa.AdaugareStaff(staff);
                                            break;
                                        }
                                        case 4: {
                                            w=false;
                                            break;
                                        }
                                    }
                                }
                            break;
                            }
                        case 2:
                            {
                            for(int i=0;i<echipa.getNumarStaff();i++) {
                                std::cout<<i+1<<". ";
                                echipa.getStaff(i).afisare();
                            }
                            std::cout<<"Ce membru al staff-ului doriti sa concediati?"<<std::endl;
                            int i;
                            std::cin>>i;
                            echipa.ConcediereStaff(i);
                            break;
                            }
                        case 3:
                            {
                                std::cout<<echipa.getBugetStafff()<<std::endl;
                            break;
                            }
                        case 4:
                            {
                            if(echipa.getNumarStaff()==0)
                                std::cout<<"Nu exista staff!"<<std::endl;
                            for(int i=0;i<echipa.getNumarStaff();i++) {
                                std::cout<<i+1<<". ";
                                echipa.getStaff(i).afisare();
                            }
                            std::cout<<std::endl;
                            break;
                            }
                        case 5:
                            {
                            if(echipa.getNumarStaff()==0)
                                std::cout<<"Nu exista staff!"<<std::endl;
                            for(int i=0;i<echipa.getNumarStaff();i++) {
                                std::cout<<i+1<<". ";
                                echipa.getStaff(i).afisare();
                            }
                            std::cout<<"Aptitudinile carui membru al staff-ului vrei sa le vezi?"<<std::endl;
                            int i;
                            std::cin>>i;
                            echipa.Aptitudini(i-1);
                            std::cout<<std::endl<<std::endl;
                                break;
                            }
                        case 6:
                            {
                                n= false;
                                break;
                            }
                    }
                }
                break;
            }
            case 3:
            {
                int agl1;
                int n=true;
                while(n)
                {

                    meniu3();
                    std::cout<<"Alege: "<<std::endl;

                    std::cin>>agl1;
                    switch (agl1)
                    {
                        case 1:
                        {
                            Jucatori juc1;
                            std::cin>>juc1;
                            echipa.AdaugareJucator(juc1);
                            break;
                        }
                        case 2:
                        {
                            std::string Nume;
                            std::cout<<"Numele jucatorului pe care doresti sa il concediezi: ";
                            std::cin>>Nume;
                            echipa.ConcediereJucator(Nume);
                            break;

                        }
                        case 3:
                        {
                            std::cout<<"Bugetul pentru salariul jucatorilor este: "<<echipa.BugetSalariiJucatori()<<std::endl;
                            break;
                        }
                        case 4:
                        {
                            for(int i=0;i<echipa.getNumarJucatori();i++)
                                std::cout<<echipa.getJucatori(i)<<std::endl;
                            break;
                        }
                        case 5:
                        {
                            n= false;
                            break;
                        }

                    }
                }
                break;
            }
            case 4:
            {
                std::cout<<echipa;
                break;
            }
            case 5:
            {
                m= false;
                break;
            }


        }

    }

}
