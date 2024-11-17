# include <stdio.h>
# include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int maxnum = INT_MIN, minnum = INT_MAX;
    int maxpos, minpos;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if( maxnum < arr[j] ){
            maxnum = arr[j];
            maxpos = j;
        }
        if( minnum > arr[j] ){
            minnum = arr[j];
            minpos = j;
        }
    }
    arr[maxpos] = minnum;
    arr[minpos] = maxnum;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}