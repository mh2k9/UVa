    #include<iostream>
    #include<stdio.h>
    #include<string>
    #include<stdlib.h>
    using std::cout;
    using std::cin;
    using std::endl;

    int main()
    {
       char c;
       int n;
       while (cin >> n)
       {

          long int sequence[3003];

          for ( int i = 1; i <= n; i++ )
             cin >> sequence[i];

          long int diferenca[3002];
          for ( int i = 1; i <= n-1; i++ )
             diferenca[i] = 0;

          for ( int i = 2; i <= n; i++ )
          {
                  int index = abs(sequence[i-1] - sequence[i]);
                  if ( index < 3003 )
             diferenca[index] = 1;
          }

          int cont = 0;
          for ( int i = 1; i <= n-1; i++ )
             if ( diferenca[i] == 1 )
                cont++;

          if ( cont == n-1 )
             cout << "Jolly"<< endl;
          else
             cout << "Not jolly" << endl;
       }

    }
