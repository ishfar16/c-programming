#include<stdio.h>

// return_tyep name(parameter)
// {
// code
// return what ?
// }

// tyep-1(easy)

int sum(int x, int y)
{
   int sum= x + y;
    return sum;
}

int main()
{
    // int s=sum(10,40);
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b)); 
    return 0;
}

// type-2

// int sum(int x, int y);

// int main()
// {
//     int s=sum(10,50);
//     printf("%d",s);
//     return 0;
// }
// int sum(int x, int y)
// {
//    int sum= x + y;
//     return sum;
// }