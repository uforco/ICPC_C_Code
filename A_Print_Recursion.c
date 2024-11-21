# include <stdio.h>
void recursion(int n, int count){
    if( count == n ) return;
    printf("I love Recursion\n");
    recursion(n, count+1);
}
int main(){
    int n;
    scanf("%d", &n);
    recursion(n, 0);
    return 0;
}