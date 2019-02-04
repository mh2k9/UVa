    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	while(mehedi.hasNext())
    	{
    		String s;
    		s=mehedi.next();
    		BigInteger number = new BigInteger(s);
    		BigInteger fact = new BigInteger("1");
    		while(!number.equals(BigInteger.ZERO))
    		{
    		fact=fact.multiply(number);
    		number=number.subtract(BigInteger.ONE);
    		}System.out.println(s+"!");
    		System.out.println(fact);
    		}
    	}

    }