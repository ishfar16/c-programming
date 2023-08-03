#include<stdio.h>
void val(int x,int y,int z,int sum)
{
    x=40;
printf("fun x-%d\n",sum);
}
int main()
{
    int x,y,z;
    x=10,y=20,z=30;
    int sum=x+y+z;
    val(x,y,z,sum);
    printf("main x-%d\n",sum);
    return 0;
}