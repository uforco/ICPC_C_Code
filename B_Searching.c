# include <stdio.h>
int main(){
    int n;
    int exes;
    int curvlue;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &exes);
    for (int j = 0; j < n; j++)
    {
        if(arr[j] == exes){
            curvlue = j;
            break;
        }else{
            curvlue = -1;
        }
    }
    printf("%d", curvlue);
    
    return 0;
}