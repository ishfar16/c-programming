#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int lenA=strlen(a);
    int CLcnt=0;
    int SLcnt=0;
    for(int i=0;i<lenA;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            CLcnt++;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            SLcnt++;
        }
    }
    printf("%d %d",CLcnt,SLcnt);
    return 0;
}