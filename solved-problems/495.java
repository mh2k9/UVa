import java.lang.*;
import java.math.*;
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner mehedi=new Scanner(System.in);
        int a;
        BigInteger n = new BigInteger("1");
    	BigInteger m = new BigInteger("1");
    	BigInteger p = new BigInteger("0");
    	String arr[];
    	arr=new String[5001];arr[0]="0";arr[1]="1";arr[2]="1";
        for(int i=3;i<=5000;i++)
        {
        	p=n.add(m); arr[i]=p.toString();
        	n=new BigInteger(m.toString());
        	m=new BigInteger(p.toString());
        }
        while(mehedi.hasNext())
    	{
    		a=mehedi.nextInt();
    		System.out.println("The Fibonacci number for "+a+" is "+arr[a]);	
    	}
    }
}
