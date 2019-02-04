import java.util.Scanner;
public class Main {
        

    public Main() {
    }
    
    public static void main(String[] args) {
      Scanner m=new Scanner(System.in);
      int n,v;
      n=m.nextInt();
      while(n>0)
      {
      	v=m.nextInt();
      	int arr[]={0,0,0,0,0,0,0,0,0,0};
      	for(int i=1;i<=v;i++)
      	{
      		String s=Integer.toString(i);
      		for(int j=0;j<s.length();j++)
      		{
      			int x=Integer.parseInt(s.substring(j,j+1));
      			arr[x]++;
      		}
      	}
      	System.out.println(arr[0]+" "+arr[1]+" "+arr[2]+" "+arr[3]+" "+arr[4]+" "+arr[5]+" "+arr[6]+" "+arr[7]+" "+arr[8]+" "+arr[9]);
      	n--;
      }
    }
}
