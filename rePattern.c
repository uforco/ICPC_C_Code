# include <stdio.h>
int main(){
    int n =8, s = (n*2)-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        s-=2;
        printf("\n");
    }
    
    return 0;
}