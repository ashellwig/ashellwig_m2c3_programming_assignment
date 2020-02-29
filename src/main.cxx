// Module 2 Chapter 3 Programming Assignment
/// Ashton Scott Hellwig
/// CSC 160: Introduction to Programming (C++)
/// 29 Feb 2020
///
/// \file
/// This file contains the main function to run the program.
///
//===----------------------------------------------------------------------===//

#include "../include/chapter3.hh"          /** chapter2::calcFuelRange */
#include "../include/general_functions.hh" /** general_functions::pauseprompt */
#include <iostream>                        /** std::cout, std::endl */

/**
 * \brief Performs the steps to execute the main application.
 *
 * \param argc Number of arguments provided.
 * \param argv Positional argument provided.
 * \return int The exit code of the program.
 */
int main(int argc, char *argv[]) {
  chapter3::sayHello();

  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
