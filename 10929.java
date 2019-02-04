import java.math.BigInteger;
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        BigInteger x=new BigInteger("0");
        BigInteger y=new BigInteger("11");
        Scanner sc=new Scanner(System.in);
        int f=0;
        while(true)
        {
        	String s1=sc.next();
			if(s1.equals("0")) break;
			x=new BigInteger(s1);
			if(x.mod(y).equals(BigInteger.ZERO))				
        	System.out.println(s1+" is a multiple of 11.");
        	else System.out.println(s1+" is not a multiple of 11.");
        }
    }
}
