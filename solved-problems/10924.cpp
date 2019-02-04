    #include<iostream>
    #include<stdio.h>
    using namespace std;
    int j;
    bool prime_check(int p)
    {
        //if(p == 1) return false;
         if(p == 2) return true;
        else if(p%2==0) return false;
       else if( p > 2)
          for(j=3; j*j<=p; j += 2)
             if( p%j == 0){ return false; break;}

        return true;
    }

    int main()
    {
        char simon[21];
        int c=0,i,sum=0;
        while(cin.getline(simon,21,'\n'))
        {
        sum=0;
           for(i=0;simon[i]!='\0';i++)
            {
                if(simon[i] >='A' && simon[i] <= 'Z'){sum += (simon[i]-38);}
                if(simon[i] >='a' && simon[i] <= 'z') {sum += (simon[i]-96);}
            }

            if(prime_check(sum)) printf("It is a prime word.\n");

            else printf("It is not a prime word.\n");

        }


        return 0;
    }
