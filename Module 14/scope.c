#include<stdio.h>
// global
int x=500;
void fun(void)
{
    int s=100;
printf("fun er x er address -%p\n",&x);
  
}
int main()
{
    int s=200;
 printf("main er x er address -%p\n",&x);
    fun();
    return 0;
}