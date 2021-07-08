import java.util.Scanner;
class Staff
{
    Scanner s=new Scanner(System.in);
    int code;
    String name;
    Staff()
    {   System.out.println("Enter code and name");
        code=s.nextInt();
        name=s.next();
    }
    void show()
    {   System.out.println("Code="+code+"\nName="+name);
    }
}
class Teacher extends Staff
{
    String sub,pub;
    Teacher()
    {
        super();
        System.out.println("Enter subject and publication");
        sub=s.next();
        pub=s.next();
    }
    void show()
    {
        super.show();
        System.out.println("Publication="+pub+"\nSubject="+sub);
    }
}
class Typist extends Staff
{
    int speed;
    Typist()
    {
        super();
        System.out.println("Enter speed");
        speed=s.nextInt();
    }
    void show()
    {
        super.show();
        System.out.println("Speed="+speed);
    }
}
class Office extends Staff
{
    int grade;
    Office()
    {
        super();
        System.out.println("Enter grade");
        grade=s.nextInt();
    }void show()
    {
        super.show();
        System.out.println("Grade="+grade);
    }
}
class Regular extends Typist
{
    float salary;
    Regular()
    {
        super();
        System.out.println("Enter salary");
        salary=s.nextFloat();
    }
    void show()
    {
        super.show();
        System.out.println("Salary="+salary);
    }
}
class Casual extends Typist
{
    float daily_wages;
    Casual()
    {
        super();
        System.out.println("Enter daily wages");
        daily_wages=s.nextFloat();
    }
    void show()
    {
        super.show();
        System.out.println("Daily wages="+daily_wages);
    }
}
public class Q12DemoInherit
{
    public static void main(String args[])
    {   Scanner s=new Scanner(System.in);
        int ch,ch1;
        System.out.println("Enter option 1.Teacher 2.Typist 3.Office");
        ch=s.nextInt();
        switch(ch)
        {
            case 1:
            Teacher t=new Teacher();
            t.show();
            break;
            case 2:
            System.out.println("Enter 1.Regular 2.Casual");
            ch1=s.nextInt();
            switch(ch1)
            {
                case 1:
                Regular r=new Regular();
                r.show();
                break;
                case 2:
                Casual c=new Casual();
                c.show();
                break;
                default:
                System.out.println("WRONG CHOICE");
            }
            break;
            case 3:
            Office o=new Office();
            o.show();
            break;
            default:
            System.out.println("Wrong Choice");
        }
    }
}
                

        