#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s\n%s", a, b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    printf("%d %d\n", lenA, lenB);
    strcat(a, b);
    printf("%s\n", a);
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    for (int i = 0; i < lenA; i++)
    {
        printf("%c", a[i]);
         a[0] = b[0];
    }
    printf(" ");
    for (int i = 0; i < lenB; i++)
    {
        printf("%c", b[i]);
        b[0] = temp;
    }
    return 0;
}