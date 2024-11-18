#include <stdio.h>

int count_odd(int arr[], int n)
{
    int oddcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            oddcount += 1;
        }
    }
    return oddcount;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int oddnum = count_odd(arr, n);
    printf("%d", oddnum);
    return 0;
}