import java.util.Scanner;
class percom
{
	public static void main(String args[])
	{	int ncr,npr,n,r;
		Scanner s=new Scanner(System.in);
	 	System.out.println("Enter the value n and r");
		n=s.nextInt();
		r=s.nextInt();
		npr=fact(n)/fact(n-r);
		ncr=fact(n)/(fact(r)*fact(n-r));
		System.out.println(n+"c"+r+"="+ncr+" "+n+"p"+r+"="+npr);
	}
	static int fact(int n)
	{if(n==0)
	return 1;
	return n*fact(n-1);
	}
}
