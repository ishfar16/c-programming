#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 10000)
    {
        printf("Gucci Bag\n");

        if (tk > 20000)
        {
            printf("Gucci belt\n");
        }
    }

    else if (tk >= 5000)
    {
        printf("levis bag\n");
    }

    else
        printf("something\n");
    return 0;
}