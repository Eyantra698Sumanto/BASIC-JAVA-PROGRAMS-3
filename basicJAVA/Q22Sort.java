import java.io.*;
class Q22Sort
{
    public static void main(String args[])   throws IOException
    {
        int a[],n;
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the value of n");
        n=Integer.parseInt(in.readLine());
        a=new int[n];
        System.out.println("Enter the numbers");
        for(int i=0;i<n;i++)
        a[i]=Integer.parseInt(in.readLine());
        Q22Sort ob=new Q22Sort();
        ob.Sort(a);
        System.out.println("The maximum is "+a[n-1]+" and minimum is "+a[0]);
         System.out.println("The sorted array is:");
         for(int i=0;i<n;i++)
          System.out.println(a[i]);
        
}
void Sort(int a[])
{int t;
    for(int i=0;i<a.length;i++)
    {
        for(int j=0;j<a.length-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        
    }
}
}

