#include <stdio.h>

union test
{
  int x;
  char arr[8];
  int y;
};
int main()
{
  printf("%ld", sizeof(union test));
  return 0;
}