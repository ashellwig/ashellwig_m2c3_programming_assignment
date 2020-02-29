// Module 2 Chapter 3 Programming Assignment
// Ashton Scott Hellwig
// CSC 160: Introduction to Programming (C++)
// 29 Feb 2020
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains global function definitions used to emulate
/// system-dependent Windows libraries.
///
//===----------------------------------------------------------------------===//

#include "../include/general_functions.hh"
#include <iostream>

/**
 * \brief Prompts the user to press <RET> to continue running the program.
 *
 * \return int Exit code.
 */
void general_functions::pauseprompt() {
  std::cout << "Press enter to continue...";

  std::cin.clear();
  std::cin.sync();
  std::cin.get();
}

// vim: set et ts=2 sw=2 ft=cpp:
