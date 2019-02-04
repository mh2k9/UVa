    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	String s1,s2;
    
    		BigInteger s=new BigInteger("0");
    		
    	while(mehedi.hasNext())
    	{
    		s1=mehedi.next();
    		s2=mehedi.next();
    		BigInteger p=new BigInteger(s1);
    		BigInteger q=new BigInteger(s2);
    		for(int i=1;i<=Integer.parseInt(s1);i++){
    			BigInteger t=new BigInteger(Integer.toString(i));
    		s=s.add(q.pow(i).multiply(t));	
    		}
    			 
    			System.out.println(s);
    			s=BigInteger.ZERO;
    		 
    	}

    }
    }
	
