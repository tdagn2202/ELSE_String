#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){
    char s[1000];
    fgets(s,1000,stdin);
    if (s[strlen(s)-1]=='\n')
       s[strlen(s)-1]='\0';


    int cnt=0;
    for (int i = 0; i<strlen(s); i++) {
        if (s[i]!=' ') {
            cnt++;
            while (s[i+1] != ' ' && i+1<strlen(s)){
                i++;
            }
        }
    }


    puts(s);
    printf("%d",cnt);
// system("Pause");
}
