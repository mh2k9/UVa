    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	String s1,s2;
    	BigInteger q=new BigInteger("0");
    	BigInteger p=new BigInteger("0");
    	while(mehedi.hasNext())
    	{
    		s1=mehedi.next();s2=mehedi.next();
    		q=new BigInteger(s1);
    		p=new BigInteger(s2);
    		
    		q=q.multiply(p);
    		System.out.println(q);		 
    	}
		
    }
    }
	
