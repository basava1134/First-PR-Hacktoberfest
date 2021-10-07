import java.lang.*;
import java.util.Scanner;
class Factorial
{
public static void main(String args[]) {
Scanner sc=new Scanner(System.in);	   
System.out.println("Find the factorial of:");
int n,i,f=1;
n=sc.nextInt();
sc.nextLine();	    
 for(i=1;i<=n;i++)
	    {
	        f=f*i;
	    }
		System.out.println("Factorial of " +n+" is " +f);
	}
}
