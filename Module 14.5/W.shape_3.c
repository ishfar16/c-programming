#include <stdio.h>
int main()
{
	int n,k,s;
	scanf("%d\n",&n);
	s=n-1;
	k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<s;j++)
		{
			printf(" ");
		}
		for(int j=0;j<k;j++)
		{
			printf("*");
		}
		printf("\n");
		s--;
		k=k+2;
	}
	s=0;
	k=(2*n)-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<s;j++)
		{
			printf(" ");
		}
		for(int j=0;j<k;j++)
		{
			printf("*");
		}
		printf("\n");
		s++;
		k=k-2;
	}
return 0;
}