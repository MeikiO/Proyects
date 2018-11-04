#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int i=0;
  char str[125];

  printf("\n hello world");

  printf("\n sartu lehen hitz batzuk");
  fgets(str,125,stdin);
  str[strlen(str)-1]='\0';
  
  printf("\n zenbat urte dituzu");
  fgets(str,125,stdin);
  sscanf(str,"%d",&i);
  
  printf("\n sartutako zenbakia %d da",i);
  
  printf("\n return to finish");
  fgets(str,125,stdio);
  return 0;
}
