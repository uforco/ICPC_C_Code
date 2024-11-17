# include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sp = n, s = 1;
    for (int i = 0; i < (n*2); i++)
    {
        for (int j = 0; j <= sp; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        if( i < n-1 ){
            sp--;
            s += 2;
        }
        if( i >= n ){
            sp++;
            s -= 2;
        }
        printf("\n");
    }
    return 0;
}