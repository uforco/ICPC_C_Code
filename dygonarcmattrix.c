# include <stdio.h>
int main(){
    int arr[3][3];
    int secarr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &secarr[i][j]);
        }
    }

    // primary diagonal matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("%d ", arr[i][i]);
            if (i != j){
                if(arr[i][j] == 0){
                    printf("Yes ");
                }
            }
            else{
                printf("%d ", arr[i][i]);
            }
            
        }
        printf("\n");
    }
printf("\n");
    // secondery diagonal metrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i+j != 2) {
                if(secarr[i][j] == 0){
                    printf("Yes ");
                } 
            }else{
                printf("%d ", secarr[i][j]);
            }
        }
        printf("\n");
    }

    
    return 0;
}