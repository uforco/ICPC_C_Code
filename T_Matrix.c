#include <stdio.h>
int absnum(int num)
{
    if (num < 0)
    {
        return num * -1;
    }
    else
    {
        return num;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int primarySum = 0;
    int secondarySum = 0;
    int sum = 0;
    if (n * n % n == 0)
    {
        for (int i = 0; i < n; i++)
        {
            primarySum += arr[i][i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; 0 <= j; j--)
            {
                if (i + j != n - 1) continue;
                secondarySum += arr[i][j];
            }
        }
        sum = absnum(primarySum) + absnum(secondarySum);
        printf("%d\n", sum);
        printf("%d", n*n);
    }
    return 0;
}