import java.util.Scanner;
class Player
{
	String name;
	int id;
 	Player()
	{	Scanner s=new Scanner(System.in);
	 	System.out.println("Enter the player name");
		name=s.next();
		System.out.println("Enter the player id");
		id=s.nextInt();
	}
	void show()
	{
	 System.out.println("Name="+name+"\nID="+id);
}}
class Cricket_Player extends Player
{
	int runs,wickets,pos;
 	Cricket_Player()
	{	
		super();
		Scanner s=new Scanner(System.in);
	 	System.out.println("Enter the no. of runs scored by the player");
		runs=s.nextInt();
		System.out.println("Enter the no. of wickets taken by the player");
		wickets=s.nextInt();
		System.out.println("Enter the position of the player");
		pos=s.nextInt();
	}
	void show()
	{super.show();
	 System.out.println("Runs="+runs+"\nWickets="+wickets+"\nPosition="+pos);
	}
}	
class Football_Player extends Player
{
	int goals;
	String pos;
	
 	Football_Player()
	{	super();
		Scanner s=new Scanner(System.in);
		
	 	System.out.println("Enter the no. of goals scored by the player");
		goals=s.nextInt();
		System.out.println("Enter the position of the player");
		pos=s.next();
	}
	void show()
	{super.show();
	 System.out.println("Goals="+goals+"\nPosition="+pos);
	}
}
class Hockey_Player extends Player
{
	int goals;
	String pos;
	
 	Hockey_Player()
	{	super();
		Scanner s=new Scanner(System.in);
		
	 	System.out.println("Enter the no. of goals scored by the player");
		goals=s.nextInt();
		System.out.println("Enter the position of the player");
		pos=s.next();
	}
	void show()
	{super.show();
	 System.out.println("Goals="+goals+"\nPosition="+pos);
	}
}
public class Q35PlayerDemo
{
	public static void main(String args[])
	{int ch;
	System.out.println("Enter:\n1 for cricket\n2 for football\n3 for hockey\n");
	Scanner s=new Scanner(System.in);
	ch=s.nextInt();
	switch(ch)
	{ case 1:
	 	Cricket_Player c=new Cricket_Player();
	
		c.show();
		break;
		case 2:	
	Football_Player f=new Football_Player();
		f.show();
		break;
		case 3:	
	Hockey_Player h=new Hockey_Player();
		h.show();
		break;
	default:
		System.out.println("Invalid option");
	}}
}
	
