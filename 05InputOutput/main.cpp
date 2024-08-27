#include <iostream>

int main()
{
  std::string name;
  std::cout << "Enter your full name: ";
  // std::cin >> name; // cin has delimiter as space " ".
  std::getline(std::cin, name); // this get the input as first_name + last_name.
  int age{21};
  std::cout << "Enter Your age: ";
  std::cin >> age;
  std::cout << "Hello " << name << " Your are " << age << " years old." << std::endl;

  return 0;
}