#include<stdio.h>
void change_it(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    a[n]=100;
    printf("%d",a[n]);
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    change_it(n,a);
    return 0;
}