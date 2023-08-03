#include <stdio.h>
#include <string.h>
int main()
{ 
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
{
	char ch[102];
	scanf("%s",ch);
	int sz=strlen(ch);
	
    if (sz>10)
	{
	printf("%c%d%c\n",ch[0],sz-2,ch[sz-1]);
	}
	else
	{
    printf("%s\n",ch);
	}

}
	return 0;
}