
#include <stdio.h>
void towerofhanoi(int n, char from, char to, char ar)
{
if (n == 1)
{
printf("\n Move disk 1 from rod %c to rod %c", from, to);
return;
}
towerofhanoi(n-1, from, ar, to);
printf("\n Move disk %d from rod %c to rod %c", n, from, to);
towerofhanoi(n-1, ar, to, from);
}
 
int main()
{
int n = 4;
towerofhanoi(n, 'A', 'C', 'B');
return 0;
}
