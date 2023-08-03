#include <stdio.h>
#include <string.h>
int main()
{
	char a[10];	
	scanf("%s",a);
	int len=strlen(a);
	
	for(int i=0;i<len;i++)
	{
		if(a[i]!=a[len-1-i])
		{
			printf("Not Palindrome");
			return 0;
		}
	}
	printf("Palindrome");
	return 0;
}