// Module 2 Chapter 3 Programming Assignment
/// Ashton Scott Hellwig
/// CSC 160: Introduction to Programming (C++)
/// 29 Feb 2020
///
/// \file
/// This file contains the main function to run the program.
///
//===----------------------------------------------------------------------===//

#include "../include/general_functions.hh" /** general_functions::pauseprompt */
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#ifndef IN_FILE_PATH
#define IN_FILE_PATH                                                           \
  "/home/ahellwig/Documents/School/CSC160/Module-2/Programming-Assignments/"   \
  "ashellwig_m2c3_programming_assignment/data/Ch3_Ex5Data.txt"
#endif // !IN_FILE_PATH

#ifndef OUT_FILE_PATH
#define OUT_FILE_PATH                                                          \
  "/home/ahellwig/Documents/School/CSC160/Module-2/Programming-Assignments/"   \
  "ashellwig_m2c3_programming_assignment/out/bin/Ch3_Ex5Out.txt"
#endif // !OUT_FILE_PATH
/**
 * \brief Performs the steps to execute the main application.
 */
int main() {

  // Declaring and Initializing Variables
  const char *inFilePath = IN_FILE_PATH;   /**! Full path to input file. */
  const char *outFilePath = OUT_FILE_PATH; /**! Full path to output file. */
  double priceOfBoxTickets = 0;      /**! Price of tickets for box tier. */
  int numberOfBoxTickets = 0;        /**! Number of tickets for box tier. */
  double priceOfSidelineTickets = 0; /**! Price of tickets for sideline tier. */
  int numberOfSidelineTickets = 0;  /**! Number of tickets for sideline tier. */
  double priceOfPremiumTickets = 0; /**! Price of tickets for premium tier. */
  int numberOfPremiumTickets = 0;   /**! Number of tickets for premium tier. */
  double priceOfGATickets = 0;      /**! Price of tickets for GA tier. */
  int numberOfGATickets = 0;        /**! Number of tickets for GA tier. */
  int totalNumTickets = 0;          /**! Total number of tickets */
  double totalSalePrice = 0.00;     /**! Total sales for all tickets summed */

  // Read the input file into the inFile variable
  std::ifstream inFile(inFilePath, std::ifstream::in);
  std::ofstream outFile(outFilePath, std::ofstream::out);

  std::cout << "Processing data..." << '\n';

  // Set output file format.
  outFile << std::fixed << std::showpoint;
  outFile << std::setprecision(2);

  // Assign values to variables
  inFile >> priceOfBoxTickets >> numberOfBoxTickets >> priceOfSidelineTickets >>
      numberOfSidelineTickets >> priceOfPremiumTickets >>
      numberOfPremiumTickets >> priceOfGATickets >> numberOfGATickets;

  // Calculate total quantity and sale price of all tickets.
  totalNumTickets = numberOfBoxTickets + numberOfSidelineTickets +
                    numberOfPremiumTickets + numberOfGATickets;
  // Calculate total price.
  totalSalePrice = ((priceOfBoxTickets * numberOfBoxTickets) +
                    (priceOfSidelineTickets * numberOfSidelineTickets) +
                    (priceOfPremiumTickets * numberOfPremiumTickets) +
                    (priceOfGATickets * numberOfGATickets));

  // Write to the output file.
  outFile << "Number of tickets sold = " << totalNumTickets << '\n';
  outFile << "Sale amount = $" << totalSalePrice << '\n';

  // Close the files.
  inFile.close();
  outFile.close();

  // Closing user prompts
  std::cout << "See output file: " << outFilePath << " for the results."
            << '\n';
  general_functions::pauseprompt();
  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
