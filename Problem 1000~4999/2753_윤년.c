#include <stdio.h>

int main()
{
	int year;
	int answer;
	scanf("%d",&year);

	if((year %4 == 0 && year %100 !=0) || year %400 ==0)
		answer = 1;
	else
		answer = 0;
	printf("%d",answer);

    
}