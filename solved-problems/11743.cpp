#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,c,d,p1,p2,p3,p4,q1,q2,q3,q4,r1,r2,r3,r4,s1,s2,s3,s4,s5;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        p1=a%10;p2=a/10;
        p1=p1*1;
        if(p1>9){p3=p1%10;p4=p1/10;p1=p3+p4;}//printf("%d\n",p1);
        q1=p2%10;q2=p2/10;
        q1=q1*2;
        if(q1>9){q3=q1%10;q4=q1/10;q1=q3+q4;}//printf("%d\n",q1);
        r1=q2%10;r2=q2/10;
        r1=r1*1;r2=r2*2;
        if(r1>9){r3=r1%10;r4=r1/10;r1=r3+r4;}//printf("%d\n",r1);
        if(r2>9){p3=r2%10;p4=r2/10;r2=p3+p4;}//printf("%d\n",r2);
        s1=p1+q1+r1+r2;
        //printf("%d\n",s1);

        p1=b%10;p2=b/10;
        p1=p1*1;
        if(p1>9){p3=p1%10;p4=p1/10;p1=p3+p4;}//printf("%d\n",p1);
        q1=p2%10;q2=p2/10;
        q1=q1*2;
        if(q1>9){q3=q1%10;q4=q1/10;q1=q3+q4;}//printf("%d\n",q1);
        r1=q2%10;r2=q2/10;
        r1=r1*1;r2=r2*2;
        if(r1>9){r3=r1%10;r4=r1/10;r1=r3+r4;}//printf("%d\n",r1);
        if(r2>9){p3=r2%10;p4=r2/10;r2=p3+p4;}//printf("%d\n",r2);
        s2=p1+q1+r1+r2;
        //printf("%d\n",s2);

        p1=c%10;p2=c/10;
        p1=p1*1;
        if(p1>9){p3=p1%10;p4=p1/10;p1=p3+p4;}//printf("%d\n",p1);
        q1=p2%10;q2=p2/10;
        q1=q1*2;
        if(q1>9){q3=q1%10;q4=q1/10;q1=q3+q4;}//printf("%d\n",q1);
        r1=q2%10;r2=q2/10;
        r1=r1*1;r2=r2*2;
        if(r1>9){r3=r1%10;r4=r1/10;r1=r3+r4;}//printf("%d\n",r1);
        if(r2>9){p3=r2%10;p4=r2/10;r2=p3+p4;}//printf("%d\n",r2);
        s3=p1+q1+r1+r2;
        //printf("%d\n",s3);

        p1=d%10;p2=d/10;
        p1=p1*1;
        if(p1>9){p3=p1%10;p4=p1/10;p1=p3+p4;}//printf("%d\n",p1);
        q1=p2%10;q2=p2/10;
        q1=q1*2;
        if(q1>9){q3=q1%10;q4=q1/10;q1=q3+q4;}//printf("%d\n",q1);
        r1=q2%10;r2=q2/10;
        r1=r1*1;r2=r2*2;
        if(r1>9){r3=r1%10;r4=r1/10;r1=r3+r4;}//printf("%d\n",r1);
        if(r2>9){p3=r2%10;p4=r2/10;r2=p3+p4;}//printf("%d\n",r2);
        s4=p1+q1+r1+r2;
        //printf("%d\n",s4);
        s5=s1+s2+s3+s4;
        //printf("%d\n",s5);
        if(s5%10==0) printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
