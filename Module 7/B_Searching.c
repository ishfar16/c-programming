#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    int X;
    scanf("%d",&X);
    int ans=-1;
    int i;
     for(int i=0;i<N;i++)
     {
        if(X==A[i])
        {
            ans=i;
          break;
        }
     }
       printf("%d",ans);

    return 0;
}