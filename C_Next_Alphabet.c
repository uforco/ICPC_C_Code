# include <stdio.h>
int main(){
    char txt;
    int b;
    scanf("%c", &txt);
    if('z' == txt || 'Z' == txt ){
        b = txt-25;
    }else{
        b = txt+1;
    }
    printf("%c\n", b);
    return 0;
};