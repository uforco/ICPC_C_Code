# include <stdio.h>

void swap_it(int arr[], int n){
    int tem, i = 0, recout = n-1;
    while (i < recout)
    {
        tem = arr[i];
        arr[i] = arr[recout];
        arr[recout] = tem;
        i++;
        recout--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    swap_it(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // printf("%d", swp);




    return 0;
}