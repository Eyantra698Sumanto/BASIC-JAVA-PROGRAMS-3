import java.util.*;
class Q32StudentDemo
{
    public static void main(String args[])
    { Student s1=new Student();
        Student s[]=new Student[5];
        for(int i=0;i<5;i++)
       s[i]=new Student();
      System.out.println("Regno name Subject1 Subject2 Subject3 Subject4 Subject5 Total");
      for(int i=0;i<5;i++)
       s[i].display();
    }}
class Student
{
    int regno;
    String name;
    int marks[]=new int[5];
    int total;
    Student()
    {
         Scanner s=new Scanner(System.in);
        System.out.println("Enter reg no.");
        regno=s.nextInt();
        System.out.println("Enter name");
        name=s.next();
        System.out.println("Enter 5 subject marks");
        for(int i=0;i<5;i++)
        marks[i]=s.nextInt();
    }
    void sum()
    {
        for(int i=0;i<5;i++)
        total+=marks[i];
    }
    void display()
    {   sum();
        System.out.println(regno+" "+name+" "+marks[0]+"  "+marks[1]+"  "+marks[2]+"  "+marks[3]+"   "+marks[4]+"   "+total);
    }  
}