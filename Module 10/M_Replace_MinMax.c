#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min =INT_MAX;
    int minindex=0;
    int max =INT_MIN;
    int maxindex=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minindex=i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxindex=i;
        }
    }
   a[minindex]=max;
   a[maxindex]=min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}