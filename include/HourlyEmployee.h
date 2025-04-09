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

  virtual void write (std::ostream& rcOutStream) const override;
  virtual void read (std::istream& rcInStream) override;

  private:
  double mHoursWorked;
  double mHourlyWage;
};