import java.util.*;
class greater
{
    void max(int a,int b)
    {   System.out.println("This method does not return anything and takes integers as its arguments");
        if(a>b)
        System.out.println(a+" is greater");
        else
        System.out.println(b+" is greater");
    }
    float max(float a,float b)
    {   System.out.println("This method returns float and takes float as its arguments");
        if(a>b)
        return a;
        else
        return b;
    }
}
public class Q40greatdemo
{
public static void main(String args[])
    {
        int m,n;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter two integer numbers");
        m=s.nextInt();
        n=s.nextInt();
        greater ob=new greater();
        ob.max(m,n);
        System.out.println("Enter two floating point  numbers");
        float a=s.nextFloat();
        float b=s.nextFloat();
        System.out.println(ob.max(a,b)+" is greater");
    }}