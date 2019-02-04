    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	BigInteger las = new BigInteger("0");
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
    		}
    		while(true)
    		{
    			las=fact.mod(BigInteger.TEN);
    			if(Integer.parseInt(las.toString())>0)
    			{
    				if(s.length()<2)
    				System.out.println("    "+s+" -> "+las);
    				else if(s.length()<3)
    				System.out.println("   "+s+" -> "+las);
    				else if(s.length()<4)
    				System.out.println("  "+s+" -> "+las);
    				else if(s.length()<4)
    				System.out.println(" "+s+" -> "+las);
    				else if(s.length()<6)
    				System.out.println(""+s+" -> "+las);
    				break;
    			}
    			fact=fact.divide(BigInteger.TEN);
    		}
    		}
    	}

    }