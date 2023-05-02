#include <stdio.h>
#include <string.h>

int main(){
    int len=0;
    char s1[1000], s2[1000];
    fgets(s1,1000,stdin);
    len = strlen(s1);
    if (s1[len-1]=='\n') 
{
    len--;
    s1[len]='\0';
}
    fgets(s2,1000,stdin);
    len = strlen(s2);
    if (s2[len-1]=='\n') 
{
    len--;
    s2[len]='\0';
}
if (strcmp(s1,s2)==0) printf("1 = 2");
else if (strcmp(s1,s2) > 0) printf("1 > 2");
else printf("1 < 2");
}
