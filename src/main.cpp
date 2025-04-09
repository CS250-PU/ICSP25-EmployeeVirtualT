//******************************************************************************
// File name:   main.cpp
// Author:      CS, Pacific University
// Date:        
// Class:       
// Assignment:  
// Purpose:     Simple driver to execute SampleClass class
// Hours:       
//******************************************************************************

/*
TODO #1: In main create a pointer to an Employee. Ask the user to enter an
Employee and then type in Jones with an id of 1234. Then output the employee  
object. Test your program and run valgrind to check for memory leaks.

TODO #2: Do the same thing for an HourlyEmployee and a SalariedEmployee.
Enter Cook 2222 35.00 40.00 and Jacobs 3333 1000.00 for each employee. Use
two more Employee ponters to do this. Test your program and run valgrind to 
check for memory leaks.

Results of TODO #1 and #2
Enter Employee Date: Jones 1234
Name: Jones ID: 1234
Enter Hourly Employee Data: Cook 2222 35.00 40.00
Name: Cook ID: 2222 Hours Worked: 35 Hourly Wage: 40
Enter Salaried Employee Data: Jacobs 3333 1000.00
Name: Jacobs ID: 3333 Salary: 1000

TODO #3: Create a vector of Employee pointers and read in all data from the
file employees.txt. In a separate loop, output the data to the screen one line
at a time.

Question #1: Can you use an Employee pointer to output the pay? Why or why not?

*/

#include <iostream>
#include "../include/SampleClass.h"

int main () {
  SampleClass cSampleClass;

  std::cout << "Factorial of 1: " << cSampleClass.factorial (0) << std::endl;

  std::cout << "Process Completed" << std::endl;

  return EXIT_SUCCESS;
}