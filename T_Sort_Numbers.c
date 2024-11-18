# include <stdio.h>

void sortAss (int newarr[], int n){
    int tem;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (newarr[i] > newarr[j] )
            {
                tem = newarr[j];
                newarr[j] = newarr[i];
                newarr[i] = tem;
            }
        }
        
    }
}

int main(){
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int newarr[3];
    for (int i = 0; i < n; i++)
    {
        newarr[i] = arr[i];
    }
    sortAss(newarr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", newarr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}