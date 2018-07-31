#include <stdio.h>

int main()
{
	int A,B,C;
	int hour, min;
	scanf("%d %d",&A,&B);
	scanf("%d",&C);

	hour = C / 60 ;
	min = C % 60;

	A = A + hour;
	B = B + min;

	if(B>59)
	{
		B = B - 60 ;
		A ++;
	}
	if(A>23)
		A = A - 24 ;
	printf("%d %d",A,B);
}