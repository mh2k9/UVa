import java.math.BigInteger;
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        BigInteger x=new BigInteger("0");
        BigInteger n=new BigInteger("0");
        BigInteger z=new BigInteger("0");
        Scanner sc=new Scanner(System.in);
        int f=0;
        String m=sc.next();
        for(int i=0;i<Integer.parseInt(m);i++)
        {
        	String s1=sc.next();
			String s2=sc.next(); 
			String r1="";
			String r2="";
			
			for(int j=s1.length();j>0;j--)
				r1=r1.concat(s1.substring(j-1,j));
			for(int j=s2.length();j>0;j--)
				r2=r2.concat(s2.substring(j-1,j));	
			z=new BigInteger(r1).add( new BigInteger(r2));
			String r3="";
			for(int k=z.toString().length();k>0;k--)
			{
				if(Integer.parseInt(z.toString().substring(k-1,k))>0)
					f=1;
				if(f==1)
					System.out.print(z.toString().substring(k-1,k));
			}f=0;				
        	System.out.println();
        }
    }
}
