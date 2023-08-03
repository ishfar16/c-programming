#include<stdio.h>
int odd(void)
{
	int n;
	scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int ans=odd();
	printf("%d",ans);
	return 0;
}