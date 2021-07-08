import java.util.Scanner;
class transpose
{
	public static void main(String args[])
	{
		 int a[][],g,i,j,m,n;
		
		System.out.println("Enter the rows and columns");
		Scanner s=new Scanner(System.in);
		
		a=new int[s.nextInt()][s.nextInt()];
		System.out.println("Enter the elements");
		for(i=0;i<a.length;i++)
			for(j=0;j<a.length;j++)
				a[i][j]=s.nextInt();
		g=a[0][0];
		for(i=0;i<100;i++)
			for(j=0;j<99;j++)
				if(a[i][j+1]>a[i][j])
				g=a[i][j+1];
		System.out.println("The largest no. is "+g);
	}
	/*static int read()
	{	Scanner s=new Scanner(System.in);
		int a=
		return a;
	}*/

}
