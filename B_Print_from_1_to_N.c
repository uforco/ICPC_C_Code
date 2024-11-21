# include <stdio.h>
void recursion(int n, int count){
    printf("%d\n", count);
    if( count == n ) return;
    recursion(n, count+1);
}
int main(){
    int n;
    scanf("%d", &n);
    recursion(n, 1);
    return 0;
}