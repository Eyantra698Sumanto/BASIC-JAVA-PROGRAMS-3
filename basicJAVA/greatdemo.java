import java.util.Scanner;
class greatdemo
{
	public static void main(String args[])
	{
		greater ob=new greater();
		ob.great();
		int c=ob.great(0);
		System.out.println(c+" is greater");
	}
}
class greater
{	int a,b;
	greater()
	{	Scanner s=new Scanner(System.in);
		System.out.println("Enter the nos.");
		a=s.nextInt();
		b=s.nextInt();
	}
	void great()
	{	System.out.println("This method does not return anything");
		if(a>b)
		System.out.println(a+" is greater");
		else
		System.out.println(b+" is greater");
	}
	int great(int c)
	{	System.out.println("This method returns the value");
		if(a>b)
		return a;
		return b;		
	}
}
