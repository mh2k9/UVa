import java.math.BigDecimal;
import java.util.Scanner;
class Main{
	public static void main (String[] args) {
		Scanner m=new Scanner(System.in);
		String s1,s2,s3;
		BigDecimal r=new BigDecimal("0");
		while(m.hasNext())
		{
			s1=m.next();s2=m.next();
			r=new BigDecimal(s1);
			s3=r.pow(Integer.parseInt(s2)).toPlainString();
			int len=s3.length(),y=0;
			for(int i=len-1;i>=0;i--)
			{
				if(s3.charAt(i)=='0')
					len--;
					else break;
			}
			if(s3.charAt(0)=='0') y=1;
			System.out.println(s3.substring(y,len));
		}
}
}