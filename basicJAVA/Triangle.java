import java.io.*;
class Triangle
{
	public static void main(String args[])
	{	double a=10,b=120,c=50;
		if(a+b+c==180&&c<180&&a<180&&b<180)
		System.out.println("Triangle is possible with angles "+a+", "+b+", "+c);
		else
	System.out.println("Triangle is not possible with angles "+a+", "+b+", "+c);
	}
}
