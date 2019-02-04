import java.lang.*;
import java.math.*;
import java.io.*;
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner mehedi=new Scanner(System.in);
        String a,b;int co;
        BigInteger n = new BigInteger("1");
    	BigInteger m = new BigInteger("2");
    	BigInteger p = new BigInteger("0");
    	String arr[];
    	arr=new String[1001];arr[0]="1";arr[1]="2";
        for(int i=2;i<=1000;i++)
        {
        	p=n.add(m); arr[i]=p.toString();
        	n=new BigInteger(m.toString());
        	m=new BigInteger(p.toString());
        }
        while(true)
    	{
    		a=mehedi.next();b=mehedi.next();
    		co=0;
    		if(a.equals("0") && b.equals("0"))break;
    		n=new BigInteger(a);
        	m=new BigInteger(b);
    		for(int i=0;i<=1000;i++)
    		{
    			if(n.subtract(new BigInteger(arr[i])).equals(BigInteger.ZERO) || m.subtract(new BigInteger(arr[i])).equals(BigInteger.ZERO))
    				{
    					co++;
    				}
    			if(n.compareTo(new BigInteger(arr[i]))==-1 && m.compareTo(new BigInteger(arr[i]))==1)
    			{
    				co++;
    				
    			}
    				
    		}
    		System.out.println(co);	
    	}
    }
}
