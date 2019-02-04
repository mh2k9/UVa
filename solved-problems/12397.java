import java.util.Scanner;
class Main {
        
    public static void main(String[] args) {
        Scanner me=new Scanner(System.in);
        int binary,num=0;
        while(me.hasNext())
        {
          binary=me.nextInt();
          	String[] RCODE = {"M","CM","D","CD","C","XC","L","XL", "X", "IX", "V", "IV", "I"};
            int[]  BVAL  = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
       		String roman = "";        
        	for (int i = 0; i < RCODE.length; i++) 
        	{
            while (binary >= BVAL[i]) 
            {
                binary -= BVAL[i];
                roman  += RCODE[i];
            }
        	}
            for(int i=0;i<roman.length();i++)
            {
            	if(roman.charAt(i)=='I') num+=1;
            	else if(roman.charAt(i)=='V') num+=2;
            	else if(roman.charAt(i)=='X') num+=2;
            	else if(roman.charAt(i)=='C') num+=2;
            	else if(roman.charAt(i)=='D') num+=3;
            	else if(roman.charAt(i)=='M') num+=4;
            	else if(roman.charAt(i)=='L') num+=2;
            }
            System.out.println(num);
            num=0;
        }	
        }
    }

