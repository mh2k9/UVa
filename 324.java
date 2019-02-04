    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	BigInteger las = new BigInteger("0");
    	while(true)
    	{
    		String s;
    		int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    		s=mehedi.next();if(s.equals("0")) break;
    		BigInteger number = new BigInteger(s);
    		BigInteger fact = new BigInteger("1");
    		while(!number.equals(BigInteger.ZERO))
    		{
    		fact=fact.multiply(number);
    		number=number.subtract(BigInteger.ONE);
    		}
    		int lim=fact.toString().length();
    		for(int i=0;i<lim;i++)
    		{
    			if(fact.toString().substring(i,i+1).equals("0"))
    				c0++;
    			else if(fact.toString().substring(i,i+1).equals("1"))
    				c1++;
    			else if(fact.toString().substring(i,i+1).equals("2"))
    				c2++;
    			else if(fact.toString().substring(i,i+1).equals("3"))
    				c3++;
    			else if(fact.toString().substring(i,i+1).equals("4"))
    				c4++;
    			else if(fact.toString().substring(i,i+1).equals("5"))
    				c5++;
    			else if(fact.toString().substring(i,i+1).equals("6"))
    				c6++;
    			else if(fact.toString().substring(i,i+1).equals("7"))
    				c7++;
    			else if(fact.toString().substring(i,i+1).equals("8"))
    				c8++;
    			else if(fact.toString().substring(i,i+1).equals("9"))
    				c9++;	
    		}
    		System.out.println(s+"! --");
    		System.out.printf("   (0)   %2d",c0);System.out.printf("   (1)   %2d",c1);System.out.printf("   (2)   %2d",c2);
    		System.out.printf("   (3)   %2d",c3);System.out.printf("   (4)   %2d",c4);
    		System.out.println();
    		System.out.printf("   (5)   %2d",c5);System.out.printf("   (6)   %2d",c6);System.out.printf("   (7)   %2d",c7);
    		System.out.printf("   (8)   %2d",c8);System.out.printf("   (9)   %2d",c9);
    		System.out.println();
    		}
    		}
    	}