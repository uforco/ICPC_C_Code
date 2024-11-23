#include <stdio.h>
int main()
{
    long long int Memo, Momo, k;
    scanf("%lld %lld %lld", &Memo, &Momo, &k);
    if (Memo % k == 0 && Momo % k == 0)
    {
        printf("Both");
    }
    else if (Memo % k == 0)
    {
        printf("Memo");
    }
    else if (Momo % k == 0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }

    return 0;
}