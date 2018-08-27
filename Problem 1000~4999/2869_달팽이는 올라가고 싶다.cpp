#include <cstdio>
int main()
{
	int A, B, V, sum;
	scanf("%d %d %d",&A, &B, &V);
	sum = (V - B) / (A - B);
	if ((V - B) % (A - B) == 0)
		printf("%d", sum);
	else
		printf("%d", sum+1);
}