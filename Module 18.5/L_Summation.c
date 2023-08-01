#include<stdio.h>
long long int fun(int n,int a[],int i)
{
	if(i==n) return 0;
	long long int sum= 	fun(n,a,i+1);
	return sum + a[i];


	}
int main()
{
	int n;
	scanf("%d",&n);
    int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	long long  int ans = fun(n,a,0);
	printf("%lld",ans);
     return 0;
	
	}