#include<stdio.h>

void main()
{
    long a,b,c;
    int n,i=0,j,k,sml,mid,t;
    scanf("%d",&n);
    long arr[3],l,m,h;
    while(n--)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        arr[0]=a,arr[1]=b,arr[2]=c;
        for(j=0;j<2;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(arr[j]>arr[k])
                {
                    t=arr[j];
                    arr[j]=arr[k];
                    arr[k]=t;
                }
            }
        }l=arr[0],m=arr[1],h=arr[2];
        if(l+m<=h || a<=0 || b<=0 || c<=0)
        printf("Case %d: Invalid\n",++i);
        else if(a==b && b==c)
        printf("Case %d: Equilateral\n",++i);
        else if(a==b || b==c || a==c)
        printf("Case %d: Isosceles\n",++i);
        else printf("Case %d: Scalene\n",++i);
    }
    return 0;
}
