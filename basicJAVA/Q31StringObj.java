import java.io.*;
class Q31StringObj
{
    public static void main(String args[])throws IOException
    { 
        String s=new String("Sumanto");int d[],c=0,j=0;char p;
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a String");
        s=in.readLine();
       System.out.println("Length of the String="+s.length());
      d=new int[s.length()];
        for(int i=0;i<s.length();i++)
        {   
            if(s.charAt(i)=='a')
              {c++;  d[j++]=i+1;}
            
        }
       System.out.println("No. of 'a' present="+c+" Present at position:");
       for(int i=0;i<c;i++)
        { System.out.print(d[i]+" ");
}}}