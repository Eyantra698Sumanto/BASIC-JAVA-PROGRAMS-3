import java.util.Scanner;
class emp
{
	public static void main(String args[])
	{	int empno[],n,i;double empsal[];String empname[];
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the no. of employees ");
		n=s.nextInt();
		empno=new int[n];
		empsal=new double[n];
		empname=new String[n];
		for(i=0;i<n;i++)
		{System.out.println("Enter details of employee "+(i+1));
		System.out.println("Enter the employee no ");
		empno[i]=s.nextInt();
		System.out.println("Enter the employee name ");
		empname[i]=s.next();
		System.out.println("Enter the employee salary ");
		empsal[i]=s.nextDouble();
		}
		System.out.println("Employee Details:\n");
		System.out.println("Employee No. Employee Name Employee Salary"); 
		for(i=0;i<n;i++)
		System.out.println(empno[i]+"\t\t"+empname[i]+"\t"+empsal[i]);
}}
