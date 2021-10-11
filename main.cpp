#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

int main()
{
  std::cout << "Task B:\n";

  std::cout << "Plain text: Hello, World!" << std::endl;
  std::cout << "Shift: 10\n";
  std::cout << "Encrypted: " << encryptCaesar("Hello, World!", 10) << std::endl;

  std::cout << "----------------------------------------------------------------\n";

  std::cout << "Task C:\n";

  std::cout << "Plain text: Hello, World!" << std::endl;
  std::cout << "Key: cake\n";
  std::cout << "Encrypted: " << encryptVigenere("Hello, World!", "cake") << std::endl;

  return 0;
}
