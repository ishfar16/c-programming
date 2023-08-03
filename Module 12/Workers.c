#include<stdio.h>
int main()
{
    float m1,m2,d;
    scanf("%f %f %f",&m1,&m2,&d);
    float ans=d/m2;
    int ans1=ans*m1;
    printf("%d",ans1);
    
    return 0;
}