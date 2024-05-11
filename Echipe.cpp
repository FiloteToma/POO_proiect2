//
// Created by filot on 26.04.2024.
//

#include "Echipe.h"
#include "Angajati.h"
#include "Bucatar.h"
#include "jucatori.h"
#include "Maseur.h"
#include <memory>
#include "Portar.h"
void Echipe::AdaugareJucator(const Jucator &juc) {
    NumarJucatori++;
    jucator.push_back(juc);
}
int Echipe::BugetSalarii()
{
    int s;
    s=SalariuAntrenor+BugetStafff;


    return s;
}
int Echipe::BugetSalariiJucatori()
{

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
void Echipe::BugetStaff(Angajati &angajati) {
    BugetStafff=BugetStafff+angajati.getSalariu();
}
void Echipe::ConcediereStaff(const int &numar) {
    staff.erase(staff.begin()+numar-1);
    NumarStaff--;
}
void Echipe::Aptitudini(const int &numar) {
    staff[numar].aptitudini();
}