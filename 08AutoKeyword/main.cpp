#include <iostream>

int main()
{
  auto var1 {12};
  auto var2 {13.0};
  auto var3 {34.0f};
  auto var4 {68.0l};
  auto var5 {'e'};
  auto var6 {954ll};
  
  
  std::cout << "variable 1 Value: " << var1 << " Size of the variable: " << sizeof(var1) << std::endl;
  std::cout << "variable 2 Value: " << var2 << " Size of the variable: " << sizeof(var2) << std::endl;
  std::cout << "variable 3 Value: " << var3 << " Size of the variable: " << sizeof(var3) << std::endl;
  std::cout << "variable 4 Value: " << var4 << " Size of the variable: " << sizeof(var4) << std::endl;
  std::cout << "variable 5 Value: " << var5 << " Size of the variable: " << sizeof(var5) << std::endl;
  std::cout << "variable 6 Value: " << var6 << " Size of the variable: " << sizeof(var6) << std::endl;
  
  
  return 0;
}