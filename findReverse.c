#include <stdio.h>

void strRev(char* str, char* rev)
{
  int len;
  len = sprintf(str, "%s", str);
  rev = &(rev[len-1]);
  while(*str != '\0')
    *rev-- = *str++;
  rev[len+1] = '\0';
  rev = &(rev[0]);
}

int main()
{
  char str[10], rev[10];
  scanf("%s", str);
  strRev(str, rev);
  printf("[%s]", rev);
  return 0;
}
