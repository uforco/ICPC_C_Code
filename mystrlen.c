# include <stdio.h>
#include <string.h>
int mylen(char strl[]){
    return strlen(strl);
}
int main(){
    char strl[20] = "sharif";
    printf("%d", mylen(strl));
    return 0;
}