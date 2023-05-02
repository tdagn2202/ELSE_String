#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char a[])
{
    char b[1000];
  int cnt = 0;
  for (int i=0;i<strlen(a);i++) b[i] = a[i];
  for (int i=0;i<strlen(a);i++) {
      b[i] = tolower(b[i]);
  }
  for (int i = 0; i <= strlen (b); i++)
    {
      if ((b[i] == 'a') || (b[i] == 'e') || (b[i] == 'u') || (b[i] == 'o')
	  || (b[i] == 'i')) 	cnt += 1;
    }
  return cnt;
}

