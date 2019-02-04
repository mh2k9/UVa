
import java.math.*;
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner mehedi=new Scanner(System.in);
        int a,k=0,cs=1;
        BigInteger n = new BigInteger("2");
    	BigInteger m = new BigInteger("3");
    	BigInteger p = new BigInteger("0");
    	String arr[];
    	arr=new String[52];arr[0]="1";arr[1]="2";arr[2]="3";
        for(int i=3;i<=51;i++)
        {
        	p=n.add(m); arr[i]=p.toString();
        	n=new BigInteger(m.toString());
        	m=new BigInteger(p.toString());
        }
        k=mehedi.nextInt();
        while(k>0)
    	{
    		a=mehedi.nextInt();
    		System.out.println("Scenario #"+(cs++)+":");
    		System.out.println(arr[a]);		
    		System.out.println();
    		k--;
    	}
    }
}
