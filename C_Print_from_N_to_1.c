# include <stdio.h>
void recursion(int n){
    printf("%d",n);
    if( 1 >= n ) return;
    printf(" ");
    recursion(n-=1);
}
int main(){
    int n;
    scanf("%d", &n);
    recursion(n);
    return 0;
}