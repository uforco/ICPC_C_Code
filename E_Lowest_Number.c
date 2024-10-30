# include <stdio.h>
# include <limits.h>
int main(){
    int n, lowvle=INT_MAX, pos;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if( arr[j] < lowvle && arr[j] != lowvle ){
            lowvle = arr[j];
            pos = j+1;
        }
    }
    printf("%d %d", lowvle, pos);
    return 0;
}