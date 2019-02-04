import java.util.Scanner;
import java.math.BigInteger;

class Main {
        

    public static void main(String[] args) {
       Scanner m=new Scanner(System.in);
       String s1;int n;
       n=m.nextInt();
       BigInteger b=new BigInteger("0");
       for(int i=0;i<n;i++)
       {
       	s1=m.next();
       	b=new BigInteger(s1);
       	System.out.println(sqrt(b));
       	if(i<n-1)
       	System.out.println();
       }
    }
    public static BigInteger sqrt(BigInteger v) {
	int n = v.toByteArray().length;
	byte[] b = new byte[n/2+1];
	b[0] = 1;
	BigInteger guess = new BigInteger(b);
	while(true) {
	BigInteger guessadd1 = guess.add(BigInteger.ONE);
	BigInteger guesssub1 = guess.subtract(BigInteger.ONE);
	if(guess.multiply(guess).compareTo(v) > 0) {
	if(guesssub1.multiply(guesssub1).compareTo(v) <= 0) {
	return guesssub1;
	}
	} else {
	if(guessadd1.multiply(guessadd1).compareTo(v) > 0) {
	return guess;
	}
	}
	guess = guess.add(v.divide(guess)).divide(new BigInteger("2"));
	}
	}
	}
