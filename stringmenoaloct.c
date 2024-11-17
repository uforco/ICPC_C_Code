# include <stdio.h>
# include <string.h>
int main(){
    char a[100];
    fgets(a, 9, stdin);
    // scanf("%s", a);
    printf("%s", a);
    return 0;
}   