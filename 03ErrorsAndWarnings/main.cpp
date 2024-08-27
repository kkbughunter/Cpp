#include <iostream>

int main()
{
  std::cout << "Hello World!" << std::endl;
  // Compile time error.
  // std::cout << "Hello World!" << std::endl // missing ';' is an example for compile time error.

  // Run time error
  int result = 7 / 0;
  std::cout << "Value: " << result << std::endl;

  return 0;
}