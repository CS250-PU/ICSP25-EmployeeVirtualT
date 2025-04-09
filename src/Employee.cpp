#include <string>
#include <ostream>
#include <istream>
#include "../include/Employee.h"

Employee::Employee () : mcName (""), mcID ("") {

}

Employee::Employee (const std::string &rcName, const std::string &rcID) : 
mcName (rcName), mcID (rcID) {

}

Employee::Employee (const Employee& cEmployee) :
mcName (cEmployee.mcName), mcID (cEmployee.mcID) {

}

std::string Employee::getName () const {
  return mcName;
}

std::string Employee::getID () const {
  return mcID;
}

void Employee::write (std::ostream& rcOutStream) const {

}

void Employee::read (std::istream& rcInStream) {

}