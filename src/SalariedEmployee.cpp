#include <string>
#include <ostream>
#include <istream>
#include "../include/SalariedEmployee.h"
#include "../include/Employee.h"

SalariedEmployee::SalariedEmployee () : Employee (), mSalary (0.0) {

}

SalariedEmployee::SalariedEmployee (const std::string& rcName, const std::string&
  rcID, double salary) :
  Employee (rcName, rcID), mSalary (salary) {

}

SalariedEmployee::SalariedEmployee (const SalariedEmployee& rcSalariedEmployee) :
  Employee (rcSalariedEmployee), mSalary (rcSalariedEmployee.mSalary) {

}

double SalariedEmployee::getSalary () const {
  return mSalary;
}

double SalariedEmployee::getPay () const {
  const double MONTHS_IN_YEAR = 12.0;

  return mSalary / MONTHS_IN_YEAR;
}

void SalariedEmployee::write (std::ostream& rcOutStream) const {
  Employee::write (rcOutStream);
  rcOutStream << " Salary: " << mSalary;
}

void SalariedEmployee::read (std::istream& rcInStream) {
  Employee::read (rcInStream);
  rcInStream >> mSalary;
}