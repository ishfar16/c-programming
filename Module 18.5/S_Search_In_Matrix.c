#include <stdio.h>
 
int main() 
{
	int N,M,X;
	scanf("%d %d",&N,&M);
	int a[N][M];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	scanf("%d",&X);
	int flag = 0;
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{ 
			if(a[i][j]==X)
			{
	         flag = 1;
				
			}
			
		}
	}
	if (flag == 1)
	{
	 printf("will not take number\n");
	}
	else 
	{
	 printf("will take number\n");
	}
    return 0;
}