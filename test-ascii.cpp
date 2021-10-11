/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Lab 6 Task A
 * 
 * Gets a line of text, 
 * and report the characters in the line 
 * and their ASCII codes.
 * */

#include <iostream>

std::string ascii(std::string input);

int main()
{
   std::string line = "Cat :3 Dog";

   std::cout << "Line: " << line << std::endl;

   std::cout << ascii(line);

   return 0;
}

/**
 * Generates a report of the characters in `input`, 
 * as well as the  characters' ASCII codes.
 * 
 * @param input  The string to generate a report on
 * @return  The report
 * */
std::string ascii(std::string input)
{
   std::string report = "";

   for (int i = 0; i < input.length(); i++)
   {
      report += input.substr(i, 1) + " " + std::to_string((int)input[i]) + "\n";
   }

   return report;
}