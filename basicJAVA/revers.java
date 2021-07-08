import java.io.*;
class revers
{
	public static void main(String args[])
	{
		int d,s=0,no=Integer.parseInt(args[0]);
		while(no>0)
		{d=no%10;
		 no=no/10;
		 s=s*10+d;
		}
		System.out.println("The reversed no. is "+s);
}}
