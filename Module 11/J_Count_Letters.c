#include<stdio.h>
#include<string.h>
int main()
{
    // char a[10000001];
    // scanf("%s",a);
    char a;
    int cnt[26]={0};
    while((a = getchar()) != EOF)
    {
        int val= a- 'a';
        cnt[val]++;
    }
     for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
        {
        printf("%c : %d\n",i+'a',cnt[i]);
        }
    }
    return 0;
}