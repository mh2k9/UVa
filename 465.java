    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	String s1,s2,s3,s4="2147483647";
    	BigInteger s=new BigInteger("0");
    	BigInteger t=new BigInteger("0");
    	BigInteger co=new BigInteger(s4);
    	while(mehedi.hasNext())
    	{
    		s1=mehedi.next(); s3=mehedi.next(); s2=mehedi.next();
			s=new BigInteger(s1);
			t=new BigInteger(s2);
			System.out.println(s1+" "+s3+" "+s2);
			if(s.compareTo(co)==1) System.out.println("first number too big");
			if(t.compareTo(co)==1) System.out.println("second number too big");
			BigInteger res=new BigInteger("0");
			if(s3.equals("+")) res=s.add(t);
			else res=s.multiply(t);
			if(res.compareTo(co)==1) System.out.println("result too big");	 
    	}

    }
    }
	
