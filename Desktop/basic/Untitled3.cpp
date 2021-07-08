#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,j;int i,p=0;
    char s[1000000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    { scanf("%lld",&n);
	 scanf("%s",&s);
    	for(j=0;j<n;j++)
    	{if(s[i]=='S'&&s[i-1]=='R')
     	p++;
		}	
 	}
        
    
}
