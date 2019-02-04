#include<stdio.h>
void main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9;
    int BCG,BGC,CBG,CGB,GBC,GCB,val;
    char *str;
    while(scanf("%d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9)!=EOF)
    {
        BGC=a4+a7+a2+a8+a6+a3;
        BCG=a4+a7+a3+a9+a2+a5;
        if(BCG<=BGC)
        {
            val=BCG; str="BCG";
        }
        else
        {
            val=BGC; str="BGC";
        }
        CBG=a6+a9+a1+a7+a2+a5;
        if(val<=CBG)
        {
            val=val; str=str;
        }
        else
        {
            val=CBG; str="CBG";
        }
        CGB=a6+a9+a2+a8+a4+a1;
        if(val<=CGB)
        {
            val=val; str=str;
        }
        else
        {
            val=CGB; str="CGB";
        }
        GBC=a5+a8+a1+a7+a3+a6;
        if(val<=GBC)
        {
            val=val; str=str;
        }
        else
        {
            val=GBC; str="GBC";
        }
        GCB=a5+a8+a3+a9+a1+a4;
        if(val<=GCB)
        {
            val=val; str=str;
        }
        else
        {
            val=GCB; str="GCB";
        }
        printf("%s %d\n",str,val);
    }
    return 0;
}
