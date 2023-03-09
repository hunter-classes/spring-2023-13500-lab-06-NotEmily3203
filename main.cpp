#include <iostream>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"

int main()
{
  std::string bruh = encryptVigenere("Hello, World!", "cake");
  std::cout<<bruh<<std::endl;
  return 0;
}
