import java.util.Scanner;
class avg
{
	public static void main(String args[])
	{	int n,sum=0,avg,a[],i;
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the value of n ");
		n=s.nextInt();
		a=new int[n];
		System.out.println("Enter the numbers ");
		for(i=0;i<n;i++)
		{a[i]=s.nextInt();
		sum+=a[i];
		}
		avg=sum/n;
		System.out.println("Sum="+sum+" Average="+avg);
	}
}
