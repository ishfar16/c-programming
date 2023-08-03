#include<stdio.h>
void len(char a[],int count)
{
	for(int i=0;a[i]!='\0';i++)
{
	count++;
}
	printf("%d",count);
}
int main()
{
char a[100];
scanf("%s",&a);
int count=0;
len(a,count);

	return 0;
}