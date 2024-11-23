#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    // fgets(a,1001, stdin);
    scanf("%s", &a);
    strcpy(b, a);
    int i = 0, j = strlen(a) - 1;

    while (i < j)
    {
        char tem = b[i];
        b[i] = b[j];
        b[j] = tem;
        i++;
        j--;
    }
    if (strcmp(a, b) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}