#include<stdio.h>
int sum(int x,int y,int z)
{
 int sum=x*y/z;
 return sum;
}
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int ans=sum(x,y,z);
    printf("%d\n",ans);
    return 0;
}