#include <stdio.h>

int main()
{
 int n,n2, dummy, d1, d2, d3;
 printf(" Enter limits");
 scanf("%d%d",&n,&n2);
 if(n>n2)
 {
 	int t = n;
 	n=n2;
 	n2=t;
 }
    while (n <= n2)
    {
        d1 = n - ((n / 10) * 10);
        d2 = (n / 10) - ((n / 100) * 10);
        d3 = (n / 100) - ((n / 1000) * 10);
        dummy = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);
        if (dummy == n)
        {
            printf("\n Armstrong numbers are :%d", dummy);
        }
        n++;
    }
    return 0;
}
