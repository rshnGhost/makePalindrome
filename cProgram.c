#include <stdio.h>
#include <string.h>

int check(char* str, int begin, int len)
{
  char *ptr1, *ptr2;
  ptr1 = str;
  ptr2 = &(str[len-1]);
  len = len/2;
  while(len>0)
  {
    if(*ptr1 == *ptr2)
    {
      //printf("%c --> %c\n",*ptr1, *ptr2);
      ptr1++;
      ptr2--;
      begin++;
      if(*ptr1 == '\0') return -1;
    }
    else return begin;
  }
}
int main()
{
  char s[10], r[10], *ptr, tmp;
  int len, begin=0, end, pos, next, step, count = 0;
  scanf("%s",s);
  len = strlen(s);
  end = len - 1;
  for(begin = 0; begin < len; begin++)
  {
    r[begin] = s[end];
    end--;
  }
  r[begin] = '\0';
  //printf("%s --> %d\n",r ,len);
  begin = 0;
  step = len;
  if(strcmp(s, r))
  {
    //printf("Not Palindrome\n");
    while(step>0)
    {
      pos = check(s, 0, len);
      if(pos>=0)
      {
        next = pos+1;
        tmp = s[pos];
        s[pos] = s[next];
        s[next] = tmp;
        count++;
        step--;
      }
      else
      {
        //printf("\n%s <- %d",s, count);
        break;
      }
    }
  }
  else
  {
    printf("Palindrome(0)");
    return 0;
  }
  //printf("\n%s <- %d",s, count);
  if(count > len)
    printf("not possible(-1)");
  else
    printf("done in(%d)",count);
  return 0;
}
