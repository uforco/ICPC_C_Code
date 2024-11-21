#include <stdio.h>
void func(int n)
{
    if (n == 0) return;
    int x = n % 10;
    func(n / 10);
    printf("%d ", x);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        func(t);
        if (t == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}