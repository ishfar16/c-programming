#include<stdio.h>
void  func(void)
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
         for(int j=1;j<=k;j++)
        {
            printf("1");
        }
         printf("\n");
        s--;
        k++;
    }

}

int main()
{
    func();
    
    return 0;
}