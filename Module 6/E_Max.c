#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int max=0;
    for(int i=1;i<=n;i=i+1)
    {
        int a;
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
    }
     printf("%d\n",max);
    return 0;
}

