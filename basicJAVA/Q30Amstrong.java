import java.io.*;
class Q30Amstrong
{
    public static void main(String args[])throws IOException
    {
        int n,n1,d,s;
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the value of n");
        n=Integer.parseInt(in.readLine());
        System.out.println("The Amstrong nos. are:");
       for(int i=1;i<=n;i++)
        {   n1=i;s=0;
            while(n1>0)
            {d=n1%10;
               s+=d*d*d;
               n1/=10;
            }
            if(s==i)
         System.out.println(i+" ");           
        }

    }
}