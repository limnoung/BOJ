#include <cstdio>
#include <cstdlib>
int compare(const void * a, const void * b) {
	return *(int*)a < *(int*)b;
}
int main()
{
	int N[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &N[i]);
		sum += N[i];
	}
	qsort(N, 5, sizeof(int), compare);
	printf("%d\n%d", sum / 5, N[2]);

}