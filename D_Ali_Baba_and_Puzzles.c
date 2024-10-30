# include <stdio.h>
int main(){
    int a, b, c, sum;
    int oneslep = 1;
    scanf("%d %d %d %d", &a, &b, &c, &sum);
    if ( a+b*c == sum || a+b-c == sum || a-b+c == sum || a-b*c == sum || a*b+c == sum || a*b-c == sum )
    {
        printf("YES");
    }else if (a+b+c == sum  || a-b-c == sum || a*b*c == sum){
        if( !oneslep ){
            printf("YES");
        }else{
            printf("NO");
            oneslep = 0;
        }
        
    }else{
        printf("NO");
    }
    return 0;
}