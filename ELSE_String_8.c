#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(){
    int n;
    scanf("%d", &n);
    char cat[50], list[n][50];
    for (int i=0;i<=n;i++) {
        fgets(list[i],50,stdin);
        list[i][strcspn(list[i], "\n")] = '\0';
    }
    for (int i=0;i<=strlen(cat);i++){
        cat[i] = i;
    }
    for(int i=1;i<=n;i++){
        printf("%d. %s\n", i, list[i]);
    }
    // system("Pause");
}
