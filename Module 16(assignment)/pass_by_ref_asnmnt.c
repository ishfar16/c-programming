
#include<stdio.h>
void val(int*p,int*q,int*r)
{
   *p=100;
   *r=220;
   int sum=*p+*q+*r;
printf("fun x-%d\n",sum);
}
int main()
{
    int x,y,z;
   x=10,y=20,z=30;
   val(&x,&y,&z);  
   printf("main x-%d\n",x);
    return 0;
}
