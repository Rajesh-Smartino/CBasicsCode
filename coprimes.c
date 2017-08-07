#include <stdio.h>

int main(void) {
    int hcf,a,b,x,y,t;
    
    printf("Enter a & b");
    scanf("%d%d",&x,&y);
    
    
  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  hcf = a;
    if(hcf==1)
    {
    	printf(" %d and %d are coprimes ",x,y);
    }else
    {
    		printf(" %d and %d are not coprimes ",x,y);
    }
	return 0;
}
