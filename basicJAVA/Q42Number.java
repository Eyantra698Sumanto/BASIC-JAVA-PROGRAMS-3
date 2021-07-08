
import java.util.*;
class Q42Number
{
    public static void main(String args[])
    {
        int m,n,i=0;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a number");
        m=s.nextInt();
        n=m;
        while(n>0)
        {   i++;
            n=n/10;
        }
        while(m>0)
        {
            n=m/(int)Math.pow(10,i);
        if(n==1) System.out.print ("One ");
        else if(n==2) System.out.print ("Two ");
        else if(n==3) System.out.print ("Three ");
        else if(n==4) System.out.print ("Four ");
        else if(n==5) System.out.print ("Five ");
        else if(n==6) System.out.print ("Six ");
        else if(n==7) System.out.print ("Seven ");
        else if(n==8) System.out.print ("Eight ");
        else if(n==9) System.out.print ("Nine ");
        m=m%(int)Math.pow(10,i--);
    }}}

