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
    		BigInteger sum=new BigInteger("0");
    		while(!number.equals(BigInteger.ZERO))
    		{
    		fact=fact.multiply(number);
    		number=number.subtract(BigInteger.ONE);
    		}
    		while(!fact.equals(BigInteger.ZERO))
    		{
    			sum=sum.add(fact.mod(BigInteger.TEN));
    			fact=fact.divide(BigInteger.TEN);
    		}
    		System.out.println(sum);
    		}
    	}

    }