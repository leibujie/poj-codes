#include <stdio.h>
#include <string.h>
#include <stdlib.h>

__int64 s[10002],c,k;
__int64 x[10002];

int cmp(const void *a, const void *b)
{
   return(*(__int64 *)a-*(__int64*)b);

}

int main()
{
	 long n,i;
     scanf("%ld",&n);
     for(i=1;i<=n;i++) scanf("%I64d",&x[i]);
     qsort(x+1,n,sizeof(x[1]),cmp);
	 s[0]=0;
	 for(i=1;i<=n;i++)
		s[i]=s[i-1]+x[i];
	 c=0;
	 for(i=1;i<=n;i++)
	 {
		 k=(2*i-n-2)*x[i]+s[n]-2*s[i-1];
	     c+=k;
     }
	 printf("%I64d\n",c);
 return(0);
}


    
    
    
   

