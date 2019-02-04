import java.util.*;
import java.math.BigInteger;
class Main {

    public static void main(String[] args) {
        Scanner me=new Scanner(System.in);
        int n;
        n=me.nextInt();
        BigInteger p=new BigInteger("0");
        BigInteger q=new BigInteger("0");
        BigInteger r=new BigInteger("0");

        String a,b,c,d;
        while(n>0)
        {
        	a=me.next();
        	c=me.next();
        	d=me.next();
        	p=new BigInteger(a);
        	q=new BigInteger(d);
        	r=p.gcd(q);
        	System.out.println(p.divide(r)+" / "+q.divide(r));
        	n--;
        }
    }
}
