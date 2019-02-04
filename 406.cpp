    #include <cstdio>
    #include <iostream>
    #define MAX 1001
    #define sq 32
    using namespace std;

    int arr[MAX];
    int v[MAX];
    int prime[MAX];
    void scive()
    {
       arr[0]=1;
       for(int i=3;i<=sq;i+=2)
       {
          for(int j=2;i*j<MAX;j++)
             arr[i*j]=1;
       }
       v[0]=0;
       v[1]=1;
       v[2]=2;
       prime[0]=1;prime[1]=2;
       int Ind=3;
       for(int i=3,in=2;i<MAX;i+=2)
       {
          if(arr[i]!=1)
          {
             v[Ind]=v[Ind-1]+1;Ind++;
             v[Ind]=v[Ind-1];
             prime[in++]=i;
          }
          else
          {
             v[Ind]=v[Ind-1];
             Ind++;
             v[Ind]=v[Ind-1];
          }
          Ind++;
       }
    }
    int main()
    {
       int n,c,mid;
       scive();
       while(scanf("%d%d",&n,&c)==2)
       {
          int start,end;
          if(v[n]%2==0)
          {
             mid=v[n]/2;
             start=v[n]/2-c+1;
             end=v[n]/2+c;
          }
          else
          {
             mid=(v[n]+1)/2;
             start=mid-(c-1);
             end=mid+c-1;
          }
          if(mid<c)start=1,end=v[n];
          printf("%d %d:",n,c);
          for(int i=start;i<=end;i++)
             cout<<" "<<prime[i-1];
          cout<<endl;
          cout<<endl;
       }
       return 0;
    }
