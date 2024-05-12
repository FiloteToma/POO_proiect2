#include "Echipe.h"
#include "Angajati.h"
#include "Bucatar.h"
#include "Portar.h"

void Echipe::AfisareJucatori() {
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
int Echipe::Punctaj() {
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
void Echipe::AdaugareJucator(Jucator *juc) {
    NumarJucatori++;
    jucator.push_back(juc);
}
void Echipe::ConcediereJucator() {
    if(NumarJucatori>0)
    {   std::cout<<std::endl<<"Ce jucator vreti sa concedioati?"<<std::endl<<"Alege jucatorul: ";
        int j;
        std::cin>>j;
        int ok=0;
        for(int i=0;i<NumarJucatori;i++)
        {
            Portar *p=dynamic_cast<Portar*>(jucator[i]);
            if(p!=nullptr) {
                ok++;
                if(ok==j) {
                    jucator.erase(jucator.begin()+i);
                    NumarJucatori--;
                }
            }
        }
        for(int i=0;i<NumarJucatori;i++)
        {
            Fundas *f=dynamic_cast<Fundas*>(jucator[i]);
            if(f!=nullptr) {
                ok++;
                if(ok==j) {
                    jucator.erase(jucator.begin()+i);
                    NumarJucatori--;
                }
            }
        }
        for(int i=0;i<NumarJucatori;i++)
        {
            Mijlocas *m=dynamic_cast<Mijlocas*>(jucator[i]);
            if(m!=nullptr) {
                ok++;
                if(ok==j) {
                    jucator.erase(jucator.begin()+i);
                    NumarJucatori--;
                }
            }
        }
        for(int i=0;i<NumarJucatori;i++)
        {
            Atacant *a=dynamic_cast<Atacant*>(jucator[i]);
            if(a!=nullptr) {
                ok++;
                if(ok==j) {
                    jucator.erase(jucator.begin()+i);
                    NumarJucatori--;
                }
            }
        }
        std::cout<<std::endl;
    }
}
int Echipe::BugetSalarii()
{
    int s;
    s=SalariuAntrenor+BugetStafff+this->BugetSalariiJucatori();


    return s;
}
int Echipe::BugetSalariiJucatori()
{
    int s;
    s=0;
    for(int i=0;i<NumarJucatori;i++)
        s=s+jucator[i]->getSalariu();
    return s;
}
void Echipe::SchimbareAntrenor(const std::string &NumeAntrenor,const int &salariu)
{
    Antrenor=NumeAntrenor;
    SalariuAntrenor=salariu;
}
void Echipe::SchimbareSalariuAntrnor(const int &salariu)
{
    SalariuAntrenor=salariu;
}
const int& Echipe::getSalariuAntrenor ()
{
    return SalariuAntrenor;
}
const std::string& Echipe::getNumeleAntrenorului()
{
    return Antrenor;
}
void Echipe::AdaugareStaff(const Staff &staf)
{
    NumarStaff++;
    staff.push_back(staf);
}
void Echipe::ConcediereStaff(const std::string &ConcedireStaff)
{
    for(int i=0;i<NumarStaff;i++)
        if(staff[i].getNume()==ConcedireStaff)
        {
            staff.erase(staff.begin()+i);
            NumarStaff--;
            break;
        }
}
const Staff& Echipe::getStaff(const int &numar)
{
    return staff[numar];
}
const int& Echipe::getNumarStaff()
{
    return NumarStaff;
}
const Jucator& Echipe::getJucator(const int &numar)
{

}
const int& Echipe::getNumarJucatori()
{
    return NumarJucatori;
}
const int& Echipe::getBugetStafff() {
    return BugetStafff;
}
const std::string& Echipe::getNumeleEchipei() {
    return NumeEchipa;
}
int Echipe::getPunctaj() {
    return Punctajj;
}
void Echipe::BugetStaff(Angajati &angajati) {
    BugetStafff=BugetStafff+angajati.getSalariu();
}
const Staff& Echipe::getStaff(const int &numar) const
{
    return staff[numar];
}
void Echipe::ConcediereStaff(const int &numar) {
    staff.erase(staff.begin()+numar-1);
    NumarStaff--;
}
void Echipe::Aptitudini(const int &numar) {
    staff[numar].aptitudini();
}