#include<iostream>
#include<stdio.h>
int main(void)
{
    using namespace std;
    double P,Q,R,S,maxPQ,minPQ,maxRS,minRS,result,i,j,k,l;
    while(cin>>P>>Q>>R>>S)
    {
        if(P-Q>Q)
        {
            maxPQ=Q;
            minPQ=P-Q;
        }
        else{
        maxPQ=P-Q;
        minPQ=Q;
        }
        if(R-S>S)
        {
            maxRS=R-S;
            minRS=S;
        }
        else
        {
            maxRS=S;
            minRS=R-S;
        }
        i=maxPQ+1;
        j=maxRS+1;
        k=2;l=2;result=1;
        while(i<=P||j<=R||k<=minPQ||l<=minRS)
        {
            if(i<=P) result*=i;
            if(k<=minPQ) result/=k;
            if(j<=R) result/=j;
            if(l<=minRS) result*=l;
            i++;j++;k++;l++;
        }
        printf("%.5lf\n",result);
    }
}
