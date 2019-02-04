import java.io.*;
import java.lang.*;
import java.util.*;
class Main{
	public static void main (String[] args) {
		Scanner me=new Scanner(System.in);
		String s1,s2,s3;
		int n1,n2,n3,l1,l2;
		String n=me.next();
		for(int i=0;i<Integer.parseInt(n);i++)
		{
			s1=me.next();	s2=me.next();	s3=me.next();
			n2=Integer.parseInt(s1,16);
			n3=Integer.parseInt(s3,16);
			if(s2.equals("+")) 
			{
				n1=n2+n3;
			}
			else n1=n2-n3;
			
			String p=Integer.toBinaryString(n2);
			String q=Integer.toBinaryString(n3);
			
			l1=p.length();
			l2=q.length();
			
			for(int i1=0;i1<13-l1;i1++) System.out.print("0");
			System.out.print(p+" "+s2+" ");
			
			for(int i2=0;i2<13-l2;i2++) System.out.print("0");
			System.out.print(q+" = ");System.out.println(n1);
			
		}
		
}
}