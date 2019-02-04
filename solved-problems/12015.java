import java.util.Scanner;
class Main{
	public static void main (String[] args) {
		Scanner inp=new Scanner(System.in);
		int flag;
		String str[],cs,val[];
		val=new String[10]; str=new String[10];
		cs=inp.next();
		for(int i=1;i<=Integer.parseInt(cs);i++)
		{
			str[0]=inp.next(); val[0]=inp.next();
			flag=Integer.parseInt(val[0]);
			for(int j=1;j<10;j++)
			{
				str[j]=inp.next(); val[j]=inp.next();
				if(Integer.parseInt(val[j])>flag)
					flag=Integer.parseInt(val[j]);
			}
		System.out.println("Case #"+i+":");
		for(int k=0;k<10;k++)
		{
			if(Integer.parseInt(val[k])==flag)
				System.out.println(str[k]);
		}	
		}
		
		}
}
