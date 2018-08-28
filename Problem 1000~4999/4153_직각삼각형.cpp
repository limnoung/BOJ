#include <cstdio>
#include <cstdlib>
using namespace std;
int compare(const void *a, const void *b) {
	return *(int*)a > *(int*)b;
}
int main()
{
	int num[3];
	while(1){
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		if (num[0] == 0 && num[1] == 0 && num[2] == 0)
			break;
		else {
			qsort(num, 3, sizeof(int), compare);
			if (num[0] * num[0] + num[1] * num[1] == num[2] * num[2])
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
}