# include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);
        if (k <= 0)
        {
            arr[i] = k * -1;
            continue;
        }else{
            arr[i] = 1;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if(j == n-1){
            printf("%d", arr[j]);
            break;
        }
        printf("%d ", arr[j]);
    }
    
    return 0;
}