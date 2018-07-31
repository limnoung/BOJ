#include <stdio.h>
#include <math.h>
int main()
{
	int N, i=0;
	scanf("%d", &N);
	while ((int)pow(2, i) < N) { i++; } 
	printf("%d", (int)pow(2,i)- ((int)pow(2, i) - N) * 2);
}