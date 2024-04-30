//
// Created by filot on 26.04.2024.
//

#include "Echipe.h"

#include "Bucatar.h"
#include "jucatori.h"
#include "Maseur.h"

void Echipe::AdaugareJucator(const Jucatori &jucator)
{
    NumarJucatori++;
    jucatori.push_back(jucator);
}
void Echipe::ConcediereJucator(const std::string &ConcediereJucator)
{
    for(int i=0;i<NumarJucatori;i++)
        if(jucatori[i].getNumeJucator() == ConcediereJucator)
        {
            jucatori.erase(jucatori.begin()+i);
            NumarJucatori--;
            break;
        }
}
void Echipe::TransferJucator(Echipe &echipa, const Jucatori &jucator)
{
    echipa.AdaugareJucator(jucator);
    this->ConcediereJucator(jucator.getNumeJucator());

}
int Echipe::BugetStaff()
{
    int s;
    s=0;
    for(int i=0;i<NumarJucatori;i++)

        s=s+staff[i].getSalariu();

    if(dynamic_cast<Maseur>(angajat)) {

    }else if(dynamic_cast<Bucatar>(angfajat)) {

    }
    return s;
}
int Echipe::BugetSalarii()
{
    int s;
    s=SalariuAntrenor+this->BugetStaff();
    for(int i=0;i<NumarJucatori;i++)
        s=s+jucatori[i].getSalariu();

    return s;
}
int Echipe::BugetSalariiJucatori()
{
    int s;
    s=0;
    for(int i=0;i<NumarJucatori;i++)
        s=s+jucatori[i].getSalariu();

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
const Jucatori& Echipe::getJucatori(const int &numar)
{
    return jucatori[numar];
}
const int& Echipe::getNumarJucatori()
{
    return NumarJucatori;
}
