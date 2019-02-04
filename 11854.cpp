#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    double a,b,c,arr[3],max,mid,min,t;

    while(1)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0) break;
        arr[0]=a,arr[1]=b,arr[2]=c;
        for(int i=0;i<2;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(arr[i]>arr[j])
                {
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        max=arr[2],mid=arr[1],min=arr[0];
        if(a>0 && b>0 && c>0 && (pow(mid,2)+pow(min,2))==pow(max,2))
        printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
