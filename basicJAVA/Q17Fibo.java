import java.util.Scanner;
class fib
{   int n;
  fib()
  {
      Scanner s=new Scanner(System.in);
      System.out.println("Enter the value of n");
      n=s.nextInt();
    }
    void generate()
    {   int a=0,b=1,c;
        for(int i=1;i<=n;i++)
        {   System.out.print(a+" ");
            c=a+b;
            a=b;
            b=c;
        }System.out.println();
    }
}
public class Q17Fibo extends fib
{
    public static void main(String args[])
    {
        fib ob=new fib();
        ob.generate();
    }
}
            