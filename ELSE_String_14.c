char *subString(char s[], int pos, int number){
    char *des = malloc((sizeof(char))*(number+1));
    
    for (int i=0;i<number;i++){
        des[i] = s[pos+i];
    }
    des[number] = '\0';
    return des;
}
