# include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = n-1; j >= 0; j--)
    {
        
        if( j == 1 ){
            // scanf("%d\n\n", &arr[j]);
            arr[j] = 100;
            break;
        }
        arr[j] = arr[j-1];
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    
    return 0;
}