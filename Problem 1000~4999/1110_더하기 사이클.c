#include <stdio.h>

int main()
{
	int origin,sum,ten,one,n;
	sum = 0 ;
	n = 1 ;
	scanf("%d",&origin);
		
	ten=origin/10;
	one=origin%10;
	sum = (one*10) + (ten + one)%10 ;
		
		while(origin != sum)
		{
			one = sum%10;
			ten = sum/10;
			sum = (one*10) + (ten + one)%10;
			n = n + 1;
		}
	printf("%d",n);

}