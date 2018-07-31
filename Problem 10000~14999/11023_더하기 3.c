#include <stdio.h>
int main()
{
	int a, sum = 0;
	do {
		scanf("%d", &a);
		sum += a;
	} while (getc(stdin) == ' ');
	printf("%d", sum);
}