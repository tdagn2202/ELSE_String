int Length(char s[]){
    int i=0, cnt=0;
    while (s[i] != '\0'){
        cnt++;
        i++;
    }
    return cnt;
}
