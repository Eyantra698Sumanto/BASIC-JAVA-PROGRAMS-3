import java.util.Scanner;
class symmetric
{
	public static void main(String args[])
	{
		

			int t,i,j,n,f=0;
			Scanner s=new Scanner(System.in);
			System.out.println("Enter the rows of marix");
			n=s.nextInt();
			int a[][]=new int[n][n];
			
			System.out.println("Enter the elements");
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j]=s.nextInt();
		
		
			System.out.println("The given matrix is:");
			for(i=0;i<n;i++)
			{	for(j=0;j<n;j++)
				System.out.print(a[i][j] );
				System.out.println();
			}
			try{ 
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
			 	if(a[i][j]!=a[j][i]);
				f=1;
			 }
			if(f==0)
			System.out.println("The matrix is symmetric");
			else
			System.out.println("The matrix is not symmetric");
		}
		catch(Exception e)
		{System.out.println("Exception");
		}
	}
}
