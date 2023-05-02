#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char c[1000];
    int len;
    fgets(c, sizeof(c), stdin);
    len = strlen(c);
    if (c[len-1]=='\n') 
{
    len--;
    c[len]='\0';
}
    puts(c);
    for (int i=0;i<strlen(c);i++){
        if ((c[i+1]>='A') && (c[i+1]<='Z')) c[i+1] = tolower(c[i+1]);
        if (((c[i-1] == ' '))&&(c[i]!=' ')) {
            c[i] = toupper(c[i]);
        }
       
    }
    c[0] = toupper(c[0]);
    printf("%s", c);
}
