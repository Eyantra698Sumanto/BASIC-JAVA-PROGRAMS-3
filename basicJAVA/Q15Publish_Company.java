import java.util.Scanner;
class Publication
{        Scanner s=new Scanner(System.in);
    String title;
    double price;
    void getdata()
    {

        System.out.println("Enter Title");
        title=s.next();
        System.out.println("Enter Price");
        price=s.nextDouble();   
    }
    void putdata()
    {
        System.out.println("Title="+title);
        System.out.println("Price="+price);
    }
}
class Book extends Publication
{
    int page_count;
    void getdata()
    {   super.getdata();
        System.out.println("Enter Page Count");
        page_count=s.nextInt(); 
    }
    void putdata()
    {   super.putdata();
        System.out.println("Page count="+page_count);
    }
}
class Tape extends Publication
{
    int play_time;
    void getdata()
    {   super.getdata();
        System.out.println("Enter Play Time");
        play_time=s.nextInt();   
    }
    void putdata()
    {   super.putdata();
        System.out.println("Play Time="+play_time);
    }
}
public class Q15Publish_Company
{
    public static void main(String args[])
    {   Scanner s=new Scanner(System.in);
        int ch;
        System.out.println("Enter 1 for book and 2 for tape");
       ch=s.nextInt();
        switch(ch)
        {
            case 1:
            Book ob=new Book();
            ob.getdata();
            ob.putdata();
            break;
            case 2:
            Tape ob1=new Tape();
            ob1.getdata();
            ob1.putdata();
            break;
            default:
            System.out.println("Wrong Choice");
        }
    }
}