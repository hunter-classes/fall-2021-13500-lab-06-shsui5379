/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Lab 6 Task B
 * 
 * Caesar cipher encryption
 * */

#include <iostream>
#include "caesar.h"

/**
 * Shifts `c` by `rshift`. 
 * Preserves the casing. 
 * Doesn't affect non-alphabets.
 * 
 * @param c  The character to shift
 * @param rshift  The amount to shift by
 * @returns  The resulting character
 * */
char shiftChar(char c, int rshift)
{
   if (!isalpha(c))
   {
      return c;
   }

   if ((c <= 90 && c + rshift > 90) || (c <= 122 && c + rshift > 122))
   {
      return c + rshift - 26;
   }

   return c + rshift;
}