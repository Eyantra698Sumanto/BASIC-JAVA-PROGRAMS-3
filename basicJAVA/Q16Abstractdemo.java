import java.util.Scanner;
abstract class Area
{
    float length,breadth,area;
    abstract float compute();
    abstract void display();
}
class Rectangle extends Area
{
    Rectangle()
    {   Scanner s=new Scanner(System.in);
        System.out.println("Enter length");
        length=s.nextFloat();
        System.out.println("Enter breadth");
        breadth=s.nextFloat();
    }
    float compute()
    {
        area=length*breadth;
        return area;
    }
    void display()
    {
        System.out.println("Area of rectangle="+compute());
    }
}
class Square extends Area
{
    Square()
    {   Scanner s=new Scanner(System.in);
        System.out.println("Enter length");
        length=s.nextFloat();
    }
    float compute()
    {
        area=length*length;
        return area;
    }
    void display()
    {
        System.out.println("Area of square="+compute());
    }
}
public class Q16Abstractdemo
{
    public static void main()
    {Scanner s=new Scanner(System.in);
                int ch;
        System.out.println("Enter 1 for rectangle and 2 for square");
       ch=s.nextInt();
        switch(ch)
        {
            case 1:
            Rectangle ob=new Rectangle();
            ob.display();
            break;
            case 2:
            Square ob1=new Square();
            ob1.display();
            break;
            default:
            System.out.println("Wrong Choice");
        }
    }}