#include<stdio.h>
int main()
{
    double x= 5.26;
    double *ptr=&x;
    double *ptr2=ptr;

    // * ptr=10.0;
    * ptr2=100.50;
    printf("x er value-%0.2f\n",x);
    printf("x er value-%0.2f\n",*ptr);
    printf("x er value-%0.2f\n",*ptr2);


    return 0;
}