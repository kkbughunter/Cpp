#include <iostream>

int Add2Num(int firstNum, int secondNum);

int Add2Num(int firstNum, int secondNum)
{
  return firstNum + secondNum;
}

int main()
{
  int firstNum = 23;
  int secondNum = 7;

  std::cout << "First Number: " << firstNum << std::endl;
  std::cout << "Second Number: " << secondNum << std::endl;

  int result = Add2Num(23, 7);

  std::cout << "Result: " << result << std::endl;
  return 0;
}