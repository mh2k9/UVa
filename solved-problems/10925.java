    import java.lang.*;
    import java.math.*;
    import java.io.*;
    import java.util.*;
    class Main{
    public static void main(String args[])
    {
    	Scanner mehedi=new Scanner(System.in);
    	String s1;
    	int n,m,j=1;
    	BigInteger s=new BigInteger("0");
    	BigInteger t=new BigInteger("0");
    	while(true)
    	{
    		n=mehedi.nextInt();
    		m=mehedi.nextInt();
    		if(m==0 && n==0) break;
    		for(int i=0;i<n;i++)
    		{
    			s1=mehedi.next();
    			s=s.add(new BigInteger(s1));
    		}
				t=s.divide(new BigInteger(Integer.toString(m)));
    			System.out.println("Bill #"+j+" costs "+s+": each friend should pay "+t);
    			System.out.println();
    			s=BigInteger.ZERO;	j++;	 
    	}

    }
    }
	
