#include "Staff.h"

void Staff::afisare() const {
  angajat->afisare();
}
void Staff::aptitudini() const{
  angajat->aptitudini();
}
int Staff::getSalariu() const {
  return angajat->getSalariu();
}
const  std::string& Staff::getNume() const {
  return angajat->getNume();
}
const int& Staff::getAptitudini() {
  angajat->aptitudini();
};