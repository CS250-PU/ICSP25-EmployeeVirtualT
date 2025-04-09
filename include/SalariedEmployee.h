#pragma once
#include <string>
#include <ostream>
#include <istream>
#include "Employee.h"

class SalariedEmployee : public Employee {
public:
  SalariedEmployee ();
  SalariedEmployee (const std::string& rcName, const std::string& rcID,
    double salary);
  SalariedEmployee (const SalariedEmployee& rcSalariedEmployee);
  double getSalary () const;
  double getPay () const;
  void write (std::ostream& rcOutStream) const;
  void read (std::istream& rcInStream);


private:
  double mSalary;
};