#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Delete(int p, char st[]){
    int i,n;
    n = strlen(st);
    if (st[n-1]=='\n') 
{
    n--;
    st[n]='\0';
}
    for (i=p;i<=n-1;i++){
        st[i] = st[i+1];
    } 
   st[n] = '\0';
} 
