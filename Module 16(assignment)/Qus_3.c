#include<stdio.h>
int count_before_zero(int n,int a[],int cnt)
{
    for(int i=0;i<n;i++)
    {
        
        if(a[i]==0)
        {
        break;
        }
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int cnt=0;
   int ans= count_before_zero(n,a,cnt);
   printf("%d",ans);

    return 0;
}