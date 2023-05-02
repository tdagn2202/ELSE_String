#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int Compare(char s1[], char s2[]){
     int i=0,j=0,d = 0;
    while (s1[i]!='\0' && s2[j]!='\0' && !d){
        d = tolower(s1[i]) - tolower(s2[j]);
        i++;
        j++;
    }
    return d;
}
