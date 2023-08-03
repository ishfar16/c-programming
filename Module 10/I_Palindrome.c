// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[1001];
//     scanf("%s",a);
//     int sz=strlen(a);
//     for(int i=0;i<sz;i++)
//     {
//         if(a[i]==a[sz-i-1])
//         {
//             printf("YES");
//         }
//         else
//         {
//             printf("NO");
//         }
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int sz=strlen(a);
    
    for(int i=0;i<=sz/2;i++)
    {
        if(a[i]!=a[sz-i-1])
        {
          printf("NO\n"); 
          return 0;
        }

    }
          printf("YES");
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[1001];
//     scanf("%s",a);
//     int sz=strlen(a);
//     for(int i=0;i<sz/2;i++)
//     {   
//         printf("i=%d sz-i-1 = %d\n",i, sz-i-1);
//         if(a[i]!=a[sz-i-1])
//         {
//           printf("NO\n"); 
//           return 0;
//         }
//     }
//     printf("YES\n");
//     return 0;
// }