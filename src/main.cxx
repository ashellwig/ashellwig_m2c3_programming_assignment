// Module 2 Chapter 3 Programming Assignment
/// Ashton Scott Hellwig
/// CSC 160: Introduction to Programming (C++)
/// 29 Feb 2020
///
/// \file
/// This file contains the main function to run the program.
///
//===----------------------------------------------------------------------===//

#include "../include/chapter3.hh"          /** chapter3::sayHello */
#include "../include/general_functions.hh" /** general_functions::pauseprompt */

/**
 * \brief Performs the steps to execute the main application.
 */
int main() {
  chapter3::sayHello();

  general_functions::pauseprompt();

  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
