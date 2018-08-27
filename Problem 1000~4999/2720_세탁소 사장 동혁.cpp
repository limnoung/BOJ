#include <cstdio>
int main()
{
	int T;
	scanf("%d", &T);
	while (T) {
		T--;
		int C, exc[4] = { 0 };
		scanf("%d", &C);
		while (C >= 25) {
			C -= 25;
			exc[0]++;
		}
		while (C >= 10) {
			C -= 10;
			exc[1]++;
		}
		while (C >= 5) {
			C -= 5;
			exc[2]++;
		}
		while (C >= 1) {
			C--;
			exc[3]++;
		}
		for(int i=0 ; i<4 ; i++)
			printf("%d ", exc[i]);	
		printf("\n");
	}
}