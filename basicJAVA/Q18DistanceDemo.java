import java.util.Scanner;
class Q18DistanceDemo
{
	public static void main(String args[])
	{
		 Distance n1=new   Distance();
		 Distance n2=new   Distance();
		  Distance res=new   Distance(0);
		res=n1.add(n2);
		System.out.println("Addition:"+res.ft+"feet and "+res.in+"inches");
	}
}
class  Distance
{
	int ft,in;
	Distance()
	{
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the distance in Feet and Inches");
		ft=s.nextInt();
		in=s.nextInt();
	}
	Distance(int a)
	{	ft=in=a;
	}
	Distance add(Distance c)
	{
		Distance temp=new Distance(0);
		temp.ft=ft+c.ft;
		temp.in=in+c.in;
		temp=incre(temp);
		return temp;
	}
	/*Distance sub(Distance c)
	{
		Distance temp=new  Distance(0);
		temp.m=m-c.m;
		temp.cm=cm-c.cm;
		temp=incre(temp);
		return temp;
	}*/
 Distance incre(Distance temp)
	{
		if(temp.in>0)
		{	temp.ft+=temp.in/12;
			temp.in=temp.in%12;
		}
	return temp;
}
}
