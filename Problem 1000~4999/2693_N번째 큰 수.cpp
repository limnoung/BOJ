#include <cstdio>
#include <cstdlib>
int compare(const void *a, const void *b) {
	return *(int*)a > *(int*)b;
}
int main()
{
	int T;
	scanf("%d", &T);
	while (T) {
		int N[10] = { 0 };
		T--;
		for (int i = 0; i < 10; i++) 
			scanf("%d", &N[i]);
		qsort(N, 10, sizeof(int), compare);
		printf("%d\n", N[7]);
	}
}