#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 100)
    {
        printf("Burger khabo");
    }
    else if (tk >= 50)
    {
        printf("Ice cream khabo");
    }
    else if (tk >= 30)
    {
        printf("fuchka khabo");
    }
    else
    {
        printf("kichu khabo na");
    }
    return 0;
}