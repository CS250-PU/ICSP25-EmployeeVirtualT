#pragma once

#include <string>
#include <ostream>
#include <istream>

class Employee {
public:
  Employee ();
  Employee (const std::string&, const std::string&);
  Employee (const Employee&);
  std::string getName () const;
  std::string getID () const;

  virtual void write (std::ostream&) const;
  virtual void read (std::istream&);

private:
  std::string mcName;
  std::string mcID;
};