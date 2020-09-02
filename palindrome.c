#include <stdio.h>

int main()
{
  char str[10], rev[10], *begin, *end;
  int len;
  scanf("%s", str);
  len = sprintf(str, "%s", str);
  begin = str;
  end = &(rev[len-1]);
  while(*begin != '\0')
    *end-- = *begin++;
  rev[len] = '\0';
  printf("%s-->%s\n", str, rev);
  return 0;
}
