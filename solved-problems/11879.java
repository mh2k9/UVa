    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	while(true)
    	{
    		String s;
    		s=mehedi.next();
    		if(s.equals("0")) break;
    		BigInteger mo=new BigInteger("17");
    		BigInteger number = new BigInteger(s);
    		BigInteger fact = new BigInteger("1");
    		
    		fact=number.mod(mo);
    		if(fact.equals(BigInteger.ZERO))
    			System.out.println("1");
    			else
    				System.out.println("0");
    		
    		}
    	}

    }