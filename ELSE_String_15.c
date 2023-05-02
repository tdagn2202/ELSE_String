void mystrcpy(char *s1, char *s2){
    int len = strlen(s1);
    for (int i=0;i<len;i++){
        s2[i] = s1[i];
    }
    s2[len] = '\0';
}
