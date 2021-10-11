/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Lab 6 Task D
 * 
 * Decryption for Caesar and Vigenere
 * */

#include <iostream>
#include "decrypt.h"
#include "caesar.h"

/**
 * Decrypts text encrypted with Caesar algorithm
 * 
 * @param ciphertext  The text to decrypt
 * @param rshift  The shift to decrypt with
 * @returns  Decrypted text
 * */
std::string decryptCaesar(std::string ciphertext, int rshift)
{
    return encryptCaesar(ciphertext, -1 * rshift);
}

/**
 * Decrypts text encrypted with Vigenere algorithm
 * 
 * @param ciphertext  The text to decrypt
 * @param keyword  The key to decrypt with
 * @returns  Decrypted text
 * */
std::string decryptVigenere(std::string ciphtertext, std::string keyword)
{
    int offsetFromSkipped = 0;
    for (int i = 0; i < ciphtertext.length(); i++)
    {
        ciphtertext[i] = shiftChar(ciphtertext[i], -1 * (keyword[(i - offsetFromSkipped) % keyword.size()] - 97));

        if (!isalpha(ciphtertext[i]))
        {
            offsetFromSkipped++;
        }
    }
    return ciphtertext;
}