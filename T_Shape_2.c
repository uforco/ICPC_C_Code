# include <stdio.h>
int main(){
    int n, s = 1;
    scanf("%d", &n);
    int t = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        s += 2;
        t--;
        printf("\n");
    }
    
    return 0;
}