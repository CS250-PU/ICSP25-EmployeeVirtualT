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




*/

#include <iostream>
#include "../include/SampleClass.h"

int main () {
  SampleClass cSampleClass;

  std::cout << "Factorial of 1: " << cSampleClass.factorial (0) << std::endl;

  std::cout << "Process Completed" << std::endl;

  return EXIT_SUCCESS;
}