import java.io.*;
class Q5division
{
    public static void main(String args[])
    {   try{
        double a,b,c;
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter two nos");
        a=Double.parseDouble(in.readLine());
        b=Double.parseDouble(in.readLine());
        c=a/b;
        
         System.out.println("Division "+a+"/"+b+"="+c);
                        }
         catch(NumberFormatException e)
         {System.out.println(e);
                    }
                    catch(IOException e)
         {System.out.println(e);
                    }
                    catch(ArithmeticException e)
         {System.out.println(e.getMessage());
                    }}}