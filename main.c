#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int i=0;
  char str[125];

  printf("\n hello world");

  printf("\n return to finish");
  fgets(str,125,stdio);
  return 0;
}
