#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    // (for loop use kore jototuk khushi tototuk copy kora jabe)
    // for(int i=0;i<=strlen(b);i++)
    // {
    //  a[i]=b[i];
    // }
    // shortcut (bt purata copy hoye jabe)
    strcpy(a,b);
    printf("%s ",a);
    return 0;
}