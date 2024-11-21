# include <stdio.h>
int recursion(int arr[], int n, int cout, int tem){
    tem += arr[cout];
    if ( cout == n-1 ) {
        return tem;
    };
    recursion(arr, n, cout+=1, tem);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rest = recursion(arr, n, 0, 0);
    printf("%d", rest);
    return 0;
}