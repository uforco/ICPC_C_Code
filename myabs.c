# include <stdio.h>
int my_abs(int n) {
    if( n < 0 ){
        return n*-1;
    }else{
        return n;
    }
}
int main(){
    int n = 11;
    int reint = my_abs(n);
    printf("%d", reint);
    return 0;
}