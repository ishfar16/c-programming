#include<stdio.h>
int  count_odd(int n,int a[],int cnt)
{
    for(int i=0;i<n;i++)
    {
     if(a[i]%2!=0)
     {
        cnt++;
     }
    }
     printf("%d",cnt);
    return cnt;
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
    int cnt=0;
    int c = count_odd(n,a,cnt);
    //  printf("%d",cnt);
    return 0;
}