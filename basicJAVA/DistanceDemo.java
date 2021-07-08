import java.util.Scanner;
class DistanceDemo
{
	public static void main(String args[])
	{
		 Distance n1=new   Distance();
		 Distance n2=new   Distance();
		  Distance res=new   Distance(0);
		res=n1.add(n2);
		System.out.println("Addition:"+res.m+"Metres and "+res.cm+"centimeters");
		res=n1.sub(n2);
		System.out.println("Subtraction:"+res.m+"Metres and "+res.cm+"centimeters");
	}
}
class  Distance
{
	int m,cm;
	Distance()
	{
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the distance in Meters and centimeters");
		m=s.nextInt();
		cm=s.nextInt();
	}
	Distance(int a)
	{	m=cm=a;
	}
	Distance add(Distance c)
	{
		Distance temp=new Distance(0);
		temp.m=m+c.m;
		temp.cm=cm+c.cm;
		temp=incre(temp);
		return temp;
	}
	Distance sub(Distance c)
	{
		Distance temp=new  Distance(0);
		temp.m=m-c.m;
		temp.cm=cm-c.cm;
		temp=incre(temp);
		return temp;
	}
	static Distance incre(Distance temp)
	{
		if(temp.cm/100>0)
		{	temp.m+=temp.cm/100;
			temp.cm=temp.cm%100;
		}
	return temp;
}
}
