import java.io.*;
class Salary
{
    String Name;
    String dob;
    String desig;
    double bs,gs;
    int leaves;
    Salary()throws IOException
    {   BufferedReader in=new  BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter name");
        Name=in.readLine();
         System.out.println("Enter DOB");
        dob=in.readLine();
         System.out.println("Enter designation");
        desig=in.readLine();
         System.out.println("Enter basic salary");
        bs=Double.parseDouble(in.readLine());
         System.out.println("Enter no of leaves");
        leaves=Integer.parseInt(in.readLine());
    }
    void display()
    {   try{
           if(bs<10000)
         throw new Exception("Salary too small");
         if(leaves>100)
         throw new Exception("Too many leaves");
        gs=0.2*bs+bs-0.1*leaves*bs;
         System.out.println("Name="+Name);
         System.out.println("DOB="+dob);
         System.out.println("designation="+desig);     
         System.out.println("basic salary="+bs);     
         System.out.println("no of leaves="+leaves);
         System.out.println("GROSS SALARY="+gs);
    }
    catch(Exception e)
    {
        System.out.println(e);
    }
    finally{
        System.out.println("THANK YOU");
    }
}}
public class Q2SalaryDemo
{
    public static void main(String args[])throws IOException
    {
        Salary ob=new Salary();
        ob.display();
    }
}