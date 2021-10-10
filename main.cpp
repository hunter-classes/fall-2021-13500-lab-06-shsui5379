#include <iostream>
#include "funcs.h"
#include "caesar.h"

int main()
{
  std::cout << "Task B:\n";

  std::cout << "Plain text: Hello, World!" << std::endl;
  std::cout << "Shift: 10\n";
  std::cout << "Encrypted: " << encryptCaesar("Hello, World!", 10) << std::endl;

  return 0;
}
