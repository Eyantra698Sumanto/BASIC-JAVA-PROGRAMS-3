import java.util.Scanner;
class sortdes
{
	public static void main(String args[])
	{	int n,j,t,a[],i;
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the value of n");
		n=s.nextInt();
		a=new int[n];
		System.out.println("Enter the numbers ");
		for(i=0;i<n;i++)
		a[i]=s.nextInt();
		for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		if(a[j]<a[j+1])
		{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
		System.out.println("Numbers in descending order:");
		for(i=0;i<n;i++)
		System.out.println(a[i]);
	}
}
