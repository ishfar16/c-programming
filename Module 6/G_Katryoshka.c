// #include<stdio.h>
// int main()
// { 
//    long long int n,m,k,ans=0;

//     scanf("%lld %lld %lld", &n,&m,&k);

//     long long int min;
//    if(n<=m && n<=k)
//   {
//     min=n;
//   }
//   else if (m<=n && m<=k)
//   {
//     min=m;
//   }
//   else
//   {
//     min=k;
//   }
//   ans+=min;
//   n-=min;
//   m-=min;
//   k-=min;

//   n=n/2;
//   if(n<k)
//   {
//     ans+=n;
//   }
//   else
//   {
//     ans+=k;
//   }

// printf("%lld\n",ans);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,v;
    scanf("%d",&n);
  int even_ans=0; int odd_ans=0;
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&v);
        if(v%2==0)
        {
        even_ans=even_ans+v;   
        }
        else
        {
            odd_ans=odd_ans+v;
        }
    }
    printf("%d %d",even_ans, odd_ans);
    return 0;
}
