import java.math.*;
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner mehedi=new Scanner(System.in);
        int a;
        BigInteger n = new BigInteger("1");
    	BigInteger m = new BigInteger("2");
    	BigInteger p = new BigInteger("0");
    	String arr[];
    	arr=new String[2002];arr[1]="1";arr[2]="1";arr[3]="2";
        for(int i=4;i<=2000;i++)
        {
        	p=n.add(m); arr[i]=p.toString();
        	n=new BigInteger(m.toString());
        	m=new BigInteger(p.toString());
        }
        while(mehedi.hasNext())
    	{
    		a=mehedi.nextInt();
    		System.out.println(arr[a]);		
    	}
    }
}
