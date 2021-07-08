import java.util.Scanner;
class Q20TimeDemo
{
    public static void main(String args[])
    {
         Time n1=new   Time();
         Time n2=new  Time (n1);
        System.out.println("Addition:"+Time.temp.hr+"hrs and "+Time.temp.min+"min"+Time.temp.sec+"sec");
    }
}
class  Time
{
    int hr,min,sec;
    static Time temp;
    Time()
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the time in hrs, min and sec");
        hr=s.nextInt();
        min=s.nextInt();
        sec=s.nextInt();
    }
    Time(Time c)
    { 	temp=new Time();
        temp.hr=temp.hr+c.hr;
        temp.min=temp.min+c.min;
        temp.sec=temp.sec+c.sec;
        if(temp.sec>60)
        {   temp.min+=temp.min/60;
            temp.sec=temp.sec%60;
        }
        
        if(temp.min>60)
        {   temp.hr+=temp.min/60;
            temp.min=temp.min%60;
        }
    }
}
