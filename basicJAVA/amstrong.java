import java.util.Scanner;
class amstrong
{
	public static void main(String args[])
	{
		int d,s=0,n,no,i;
		System.out.println("Enter a no.");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		System.out.println("The amstrong nos. till "+n+" are:");
		for(i=0;i<=n;i++)
		{no=i;s=0;
		while(no>0)
		{d=no%10;
		 no=no/10;
		 s+=d*d*d;
		}if(s==i)
		System.out.println(s);
}}}