#include<stdio.h>
void fun(int x)
{
    x=200;
//    printf("fun er x er address-%p\n",&x);
}
int main()
{
    int x=10;
    // printf("x er address-%p\n",&x);
    fun(x);
    printf("main er  er value- %d\n",x);
    return 0;
}