#include <iostream>

int main()
{
  // Braced initializers
  int number1{10};
  std::cout << "Number 1: " << number1 << std::endl;
  // Functional initializers
  int number2(5.6);
  std::cout << "Number 2: " << number2 << std::endl;
  // Assignment initializers
  int number3 = 50;
  std::cout << "Number 3: " << number3 << std::endl;

  int add_result{number1 + number2};
  std::cout << "Number1 + Number2 = " << add_result << std::endl;

  int sub_result(number1 - number2);
  std::cout << "Number1 - Number2 = " << sub_result << std::endl;

  int mul_result = number1 * number2;
  std::cout << "Number1 x Number2 = " << mul_result << std::endl;

  float div_result{number1 / number2}; // using Braced intiializers is good to go.
  std::cout << "Number1 / Number2 = " << div_result << std::endl;

  // div_result {number1 / number2}; // or div_result (number1 / number2); // gives error - expected ‘;’ before ‘{’ token
  div_result = number1 / number2; // only assignment opr is work in updation of values.
  std::cout << "Number1 / Number2 = " << div_result << std::endl;

  // Check the size with sizeof()
  std::cout << "Size of Int: " << sizeof(int) << "byts."<< std::endl;
  std::cout << "Size of Number3: " << sizeof(number3) << "buts." << std::endl;

  return 0;
}