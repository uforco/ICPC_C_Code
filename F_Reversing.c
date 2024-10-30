# include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int r = n-1; r >= 0 ; r--)
    {
        printf("%d ", arr[r]);
    }
    return 0;
}