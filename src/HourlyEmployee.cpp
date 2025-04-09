#include <string>
#include <ostream>
#include <istream>
#include "../include/HourlyEmployee.h"
#include "../include/Employee.h"

HourlyEmployee::HourlyEmployee () : Employee (), mHoursWorked (0.0),
mHourlyWage (0.0) {

}

HourlyEmployee::HourlyEmployee (const std::string& rcName, const std::string&
  rcID, double hoursWorked, double hourlyWage) :
  Employee (rcName, rcID), mHoursWorked (hoursWorked), mHourlyWage (hourlyWage) {
}

HourlyEmployee::HourlyEmployee (const HourlyEmployee& rcHourlyEmployee) :
  Employee (rcHourlyEmployee), mHoursWorked (rcHourlyEmployee.mHoursWorked),
  mHourlyWage (rcHourlyEmployee.mHourlyWage) {

}

double HourlyEmployee::getHoursWorked () const {
  return mHoursWorked;
}

double HourlyEmployee::getHourlyWage () const {
  return mHourlyWage;
}

double HourlyEmployee::getPay () const {
  return mHoursWorked * mHourlyWage;
}

void HourlyEmployee::write (std::ostream& rcOutStream) const {
  Employee::write (rcOutStream);
  rcOutStream << " Hours Worked: " << mHoursWorked
    << " Hourly Wage: " << mHourlyWage;
}

void HourlyEmployee::read (std::istream& rcInStream) {
  Employee::read (rcInStream);
  rcInStream >> mHoursWorked >> mHourlyWage;
}