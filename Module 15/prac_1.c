#include<stdio.h>
#include<stdlib.h>
int my_abs(int x)
{
   int pstv =abs(x);
   return pstv;
}
int main()
{
    int x;
    scanf("%d",&x);
   int ans= my_abs(x);
   printf("%d",ans);
    return 0;
}