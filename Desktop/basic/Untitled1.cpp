#include<stdio.h>
#include<math.h>
int main()
{
    long long int a1=1,b1=1,a=1,b=1,c;int i,j,a2[100],t;long double d=sqrt(5),e=1,e1;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {    scanf("%d",&a2[i]);
}for(i=1;i<=t;i++)
    { 
        for(j=2;j<a2[i];j++)
        {
         e1=(double)b/a-(1+d)/2;
              if(e1<0)
              e1=-e1;
            if(e1<e)
            {
            e=e1;
            a1=a;b1=b;    
            }  
            c=a+b;
            a=b;
            b=c;
        }
    
        printf("%lld %lld \n",a1,b1);
  }
    
}

