import java.math.BigInteger;
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        BigInteger x=new BigInteger("0");
        BigInteger y=new BigInteger("0");
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext())
        {
        	String s1=sc.next();String s2=sc.next();String s3=sc.next();
			x=new BigInteger(s1);y=new BigInteger(s3);
			if(s2.equals("%"))
				System.out.println(x.mod(y));
				else System.out.println(x.divide(y));
        }
    }
}
