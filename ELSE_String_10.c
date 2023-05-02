#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Insert(char c, int p, char st[]){
    int i,n;
    n = strlen(st);
    if (st[n-1]=='\n') 
{
    n--;
    st[n]='\0';
}
    for (i=n-1;i>=p;i--){
        st[i+1] = st[i];
        n++;
        
    } 
   st[p] = c;
} 
