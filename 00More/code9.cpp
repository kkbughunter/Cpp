
/*
// write the Correct version of the below code.
#include<stdio.h>
struct st
{
    int x;
    struct st next;
};
int main()
{
    struct st temp;
    temp.x = 10;
    temp.next = temp;
    printf("%d", temp.next.x);
    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>

struct st
{
  int x;
  struct st *next;
};
int main()
{
  struct st temp;
  temp.x = 10;
  temp.next = &temp;
  printf("%d", temp.next->x);
  return 0;
}

