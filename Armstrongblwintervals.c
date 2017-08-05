#include <stdio.h>

int main()
{
 int n, dummy, d1, d2, d3;

   
    n = 001;
    while (n <= 1000)
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
