import java.util.Scanner;
class facto
{
	public static void main(String args[])
	{	int n,fact=1;
		Scanner s=new Scanner(System.in);
		n=s.nextInt();
		while(n>0){
			fact*=n;
			n--;
		}

		System.out.println("Factorial="+fact);
	}
}
