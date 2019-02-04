#include<stdio.h>
static void quickSort (long a[], long lo, long hi)
{
    long i=lo, j=hi, h;
    long x=a[(lo+hi)/2];
    do
    {
        while (a[i]<x) i++;
        while (a[j]>x) j--;
        if (i<=j)
        {
            h=a[i]; a[i]=a[j]; a[j]=h;
            i++; j--;
        }
    } while (i<=j);
    if (lo<j) quickSort(a, lo, j);
    if (i<hi) quickSort(a, i, hi);
}

void main()
{
    long n, i;
    while(1)
    {
        scanf("%ld",&n);
        if (n==0) break;
        long a[n];
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        quickSort(a,0,n-1);
        for(i=0;i<n;i++)
        {
        if(i==n-1) printf("%ld",a[i]);
        else printf("%ld ",a[i]);
        }

        printf("\n");
    }
    return 0;
}
