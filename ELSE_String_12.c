#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
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

int main(){
    char s[1000];
    
    fgets(s,1000,stdin);
    int n= strlen(s);
     if (s[n-1] == '\n') { 
        n--; // =
        s[n] = '\0';
    }
    puts(s);
    for (int i=0;i<strlen(s)-1;i++)
    {
        if ((s[i]==' ') && (s[i+1]==' ')) 
        {
        Delete(i, s);  
        i--; 
        } 
    }
    if (s[0]==' ') Delete(0,s);

    if (s[n-2] ==' ') Delete(n-2,s);
    printf("%s", s);
    // system("pause");
    }
