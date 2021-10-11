/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Lab 6 Task C
 * 
 * Vigenere cipher
 * */

#include <iostream>
#include "vigenere.h"
#include "caesar.h"

/**
 * Uses `keyword` to encrypt `plaintext` using the vigenere cipher
 * 
 * @param plaintext  The text to encrypt
 * @param keyword  The key to encrypt using
 * @returns  The encrypted text
 * */
std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    int offsetFromSkipped = 0;
    for (int i = 0; i < plaintext.length(); i++)
    {
        plaintext[i] = shiftChar(plaintext[i], keyword[(i - offsetFromSkipped) % keyword.size()] - 97);

        if (!isalpha(plaintext[i]))
        {
            offsetFromSkipped++;
        }
    }
    return plaintext;
}