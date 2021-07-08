
import java.util.*;
class Q41symmetric
{
    public static void main(String args[])
    {
        int a[][],b[][],c[][],m,i,j,flag=1;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the value of row and column");
        m=s.nextInt();
      
        a=new int[m][m];
        b=new int[m][m];
        System.out.println("Enter the numbers of matrix ");
        for( i=0;i<m;i++)
        {for( j=0;j<m;j++)
        a[i][j]=s.nextInt();;
    }
        System.out.println("Matrix  is:");
        for( i=0;i<m;i++)
        {   for( j=0;j<m;j++)
            System.out.print(a[i][j]+" ");
            System.out.println();
        }

        for( i=0;i<m;i++)
           for( j=0;j<m;j++)
            if(a[i][j]!=a[j][i])
            flag=0;
        
        if(flag==1)
        System.out.println("Matrix is symmetric");
        else System.out.println("Matrix is not symmetric");

    }}

