#include <iostream>
#include <cctype>
#include "caesar.h"

int main()
{
  std::string bruh = encryptCaesar("Hello, World!", 10);
  std::cout<<bruh<<std::endl;
  return 0;
}
