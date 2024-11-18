# include <stdio.h>
# include<limits.h>

void maxinmin (int arr[], int n, int *minnum, int *maxnum){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <  *minnum ){
             *minnum = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > *maxnum){
            *maxnum = arr[i];
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int minnum = INT_MAX, maxnum = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxinmin(arr, n, &minnum, &maxnum);
    printf("%d %d", minnum, maxnum);
    return 0;
}