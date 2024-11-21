#include <stdio.h>
long long int fuc(long long int n)
{
    if(n == 0) return 1;
    long long int t = fuc(n - 1);
    return n * t;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int s = fuc(n);
    printf("%lld", s);
    return 0;
}