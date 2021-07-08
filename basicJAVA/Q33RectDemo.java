import java.util.Scanner;
public class Q33RectDemo
{
    
    public static void main(String args[])
    {
        Rectangle R1=new Rectangle();
        Rectangle R2=new Rectangle();
        R1.get_length();
        R1.get_width();
        R1.get_colour();
        R1.find_area();
        R2.get_length();
        R2.get_width();
        R2.get_colour();
        R2.find_area();
        if((R1.area==R2.area)&&(R1.colour.equals(R2.colour)))
        System.out.println("Matching Rectangles");
        else System.out.println("Not Matching Rectangles");
    }
}

class Rectangle
{
    Scanner s=new Scanner(System.in);
    String colour;
    double width,length,area;
    void get_width()
    {System.out.println("Enter width");
        width=s.nextDouble();
    }
    void get_length()
    {System.out.println("Enter length");
        length=s.nextDouble();
    }
    void get_colour()
    {System.out.println("Enter colour");
        colour=s.next();
    }
    void find_area()
    {
        area=length*width;
    }
}