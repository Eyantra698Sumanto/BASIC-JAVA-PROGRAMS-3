
    #include<stdio.h>//to input header files
#include<math.h>
int main()//main function
{
    int t,n,d,flag=0,f=0;long no,no1;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {scanf("%d",&n);
    scanf("%d",&d);
    for(no=(long)pow(10,n);no<=pow(10,n);no++)
    {    flag=0;f=0;no1=no;
        for(n=2;n<=sqrt(no);n++)
        {
         if(no%n==0)
         {
          flag=1;
          break;
         }}while(no1!=0)
        {if(no1%10==t)
        f++;
        no1=no1/10;
        }
        
        if(flag==0&&f>1)
        {printf("%ld ",no);
        }
    }
    
}   }

