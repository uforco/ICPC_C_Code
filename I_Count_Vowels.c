#include <stdio.h>
int fuc(char s[], int n)
{
    if (s[n] == '\0')
        return 0;
    int ss = fuc(s, n + 1);
    if (s[n] >= 'A' && s[n] <= 'Z')
    {
        s[n] = s[n] + 32;
    }
    if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u')
    {
        return ss + 1;
    }
    else
    {
        return ss;
    }
}
int main()
{
    char vole[205];
    fgets(vole, 205, stdin);
    // printf("%s", vole);
    int s = fuc(vole, 0);
    printf("%d", s);
    return 0;
}