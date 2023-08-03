#include<stdio.h>
#include<string.h>
void my_len(char s[])
{
   int len=strlen(s);
   printf("%d",len);
}
int main()
{
    char s[100];
    scanf("%s",&s);
    my_len(s);
    return 0;
}