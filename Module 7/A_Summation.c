#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }
    if(sum<0)
   { 
    printf("%lld", sum * -1);
   }
   else 
   {
    printf("%lld",sum);
   }
    return 0;
}