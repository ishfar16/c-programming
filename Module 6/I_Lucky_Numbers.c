#include<stdio.h>
int main()
{
   int n;
	scanf("%d",&n);
	int mod=n%10;
	int dvd=n/10;
	if(mod%dvd==0)
    {
		printf("YES");
	}
	else if(dvd%mod==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

    return 0;
}