#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int modnum = a % 10, sum = a / 10;
    // printf("%d %d", modnum, sum);
    if (modnum != 0 && sum != 0)
    {
        if (modnum >= sum)
        {
            if (modnum % sum == 0)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
        else if (sum % modnum == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }else{
        printf("YES");
    }

    return 0;
}