#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char s[]){
    int n=strlen(s);
    char temp;
    for (int i=0;i<n/2;i++) {
        temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }  
} 
