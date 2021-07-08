import java.io.*;
class Q21StringPalin
{
    public static void main(String args[])throws IOException
    {
        String s,s1="";
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a String");
        s=in.readLine();
       for(int i=s.length()-1;i>=0;i--)
        {
            char c=s.charAt(i);
            s1+=c;
        }
        if(s.equals(s1))
        System.out.println("String is palindrome");
        else System.out.println("String is not palindrome");
    }
}