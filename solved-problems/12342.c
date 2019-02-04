#include<stdio.h>
#include<math.h>

int main()
{
    long long inp,arr[5];
    int cs,c=1; double val,b;
    scanf("%d",&cs);
    while(cs--)
    {
        scanf("%lld",&inp);
        if(inp<=180000)
            printf("Case %d: 0\n",c++);
            else
            {
                if(inp>=180000){
                arr[0]=180000;
                inp=inp-180000;}

                if(inp>=300000){
                arr[1]=300000;
                inp=inp-300000;}else {arr[1]=inp;inp=0;}

                if(inp>=400000){
                arr[2]=400000;
                inp=inp-400000;}else {arr[2]=inp;inp=0;}

                if(inp>=300000){
                arr[3]=300000;
                inp=inp-300000;}else {arr[3]=inp;inp=0;}

                arr[4]=inp;
                val=0+(arr[1]*.10)+(arr[2]*.15)+(arr[3]*.20)+(arr[4]*.25);
                b=ceil(val);
                if(b<2000) printf("Case %d: 2000\n",c++);
                else printf("Case %d: %.0lf\n",c++,b);
            }
    }
    return 0;
}
