import java.math.*;
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        BigInteger x=new BigInteger("0");
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext())
        {
        	String s1=sc.next();;
			long  n=Long.parseLong(s1);
			long s=((n*(n+1))/2);
			String p=Long.toString(s);
			x=new BigInteger(p);
				System.out.println(x.pow(2));
		
        }
    }
}
