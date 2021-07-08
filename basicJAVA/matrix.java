import java.util.Scanner;
class matrix
{
	public static void main(String args[])
	{
		 int a[][],g,i,j,m,n;
		
		System.out.println("Enter the rows and columns");
		Scanner s=new Scanner(System.in);
		m=s.nextInt();
		n=s.nextInt();
		a=new int[m][n];
		System.out.println("Enter the elements");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				a[i][j]=s.nextInt();
		g=a[0][0];
		for(i=0;i<m;i++)
			for(j=0;j<n-1;j++)
				if(a[i][j+1]>a[i][j])
				g=a[i][j+1];
		System.out.println("The largest no. is "+g);
	}
	/*static int read()
	{	Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		return a;
	}*/

}
