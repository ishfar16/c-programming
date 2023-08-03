#include<stdio.h>
void swap_it(int a,int b)
{

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int* ptr=&a;
    int temp=a;
    *ptr=b;
    int* ptr1=&b;
    *ptr1=temp;
    swap_it(a,b);
printf("%d %d",*ptr,*ptr1);
    return 0;
}