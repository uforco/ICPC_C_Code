# include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a >= 'a' && a <= 'z'){
        int restc = a - 32;
        printf("%c\n",restc);
    }
    if(a >= 'A' && a <= 'Z'){
        int restc = a + 32;
        printf("%c\n",restc);
    }else{
        printf("No Char");
    }
    return 0;
}