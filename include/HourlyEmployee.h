#pragma once
#include <string>
#include <ostream>
#include <istream>
#include "Employee.h"

class HourlyEmployee : public Employee {
public:
  HourlyEmployee ();
  HourlyEmployee (const std::string& rcName, const std::string& rcID, 
    double hoursWorked, double hourlyWage);
  HourlyEmployee (const HourlyEmployee& rcHourlyEmployee);
  double getHoursWorked () const;
  double getHourlyWage () const;
  double getPay () const;

  void write (std::ostream& rcOutStream) const;
  void read (std::istream& rcInStream);

  private:
  double mHoursWorked;
  double mHourlyWage;
};