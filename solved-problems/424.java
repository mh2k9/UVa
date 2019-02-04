    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	String s1;	BigInteger q=new BigInteger("0");
    	while(true)
    	{
    		s1=mehedi.next();
    		if(s1.equals("0")) break;
    		BigInteger p=new BigInteger(s1);
    		
    		q=q.add(p);		 
    	}
		System.out.println(q);
    }
    }
	
