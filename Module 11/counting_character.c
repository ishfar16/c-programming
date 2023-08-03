// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[26];
//     scanf("%s ",s);
//     int count[26]={0};
//     for(int i=0;i<strlen(s);i++)
//     {
//     char value= s[i] - 'a';
//     count[value]++;
//     }
//     for(int i=0;i<26;i++)
//     {
//     printf("%c - %d\n",i+'a',count[i]);
//     }

//     return 0;
// }




#include<stdio.h>
#include<string.h>
int main()
{
    char s[26];
    scanf("%s ",s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int val= s[i] - 97;
        count[val]++;
    }
    // for(int i=0;i<26;i++)
    // {
    //     if(count[i]!=0)
    //     {
    //     printf("%c- %d\n",i+'a',count[i]);
    //     }
    // }
    for(int i=0;i<strlen(s);i++)
    {
        int val= s[i]-'a';
        if(count[val]!=0)
        {
         printf("%c - %d\n",val+97,count[val]); 
        }
        count[val]=0;
    }
    return 0;
}