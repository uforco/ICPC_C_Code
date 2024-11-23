#include <stdio.h>
#include<limits.h>
int fuc(int arr[], int n, int cout, int maxvel)
{
    if(n == cout) return maxvel;
    int ctr = maxvel;
    if( ctr < arr[cout] ){
        ctr = arr[cout];
    }
    int restul = fuc(arr, n, cout+1, ctr);
    return restul;
}
int main()
{
    int n, maxvel = INT_MIN;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rest = fuc(arr, n, 0, maxvel);
    printf("%d", rest);
    return 0;
}