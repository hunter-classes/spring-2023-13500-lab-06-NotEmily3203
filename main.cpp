#include <iostream>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::string bruh;
  std::string bruh = encryptCaesar("Hello, World!", 10);
  std::cout<<bruh<<std::endl;
  std::string bruh = encryptVigenere("Hello, World!", "cake");
  std::cout<<bruh<<std::endl;
  std::string bruh = decryptVigenere("Jevpq, Wyvnd!", "cake");
  std::cout<<bruh<<std::endl;
  std::string bruh = decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout<<bruh<<std::endl;
  return 0;
}
