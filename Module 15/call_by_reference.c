#include<stdio.h>
void fun(int *p)
{
// printf("main er x er value-%d\n",*p);
*p=200;
}
int main()
{
    int x=10;
    // printf("x er addres-%p\n",&x);
    fun(&x);
printf(" x er value-%d\n",x);  

    return 0;
}