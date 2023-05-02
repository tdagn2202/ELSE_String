#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 

int isPalindrome(char a[])
{
    int n= strlen(a);
    for (int i =0; i<n;i++){
        if (a[i]!=a[n-i-1]) {
            return false;
    }
    }
    return true;
}

int main(){
    int len;
    char a[500];
    fgets(a,500,stdin);
    len = strlen(a);
if (a[len-1]=='\n') 
{
    len--;
    a[len]='\0';
}
    puts(a);
    // printf("\n");
    // isPalindrome(a);
    if (isPalindrome(a)) {
        printf("YES");
    }
    else printf("NO");
}


// tdang2202 - deptrai
