#include <stdio.h>

int fun()
{
#include "a.c"
}

int main()
{
  printf("%i\n", fun()); // output: "20"
}
