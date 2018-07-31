#include <iostream>
using namespace std;
bool* PrimeArray;
void Eratos(int n) {
	PrimeArray = new bool[n + 1];
	for (int i = 2; i <=n; i++)
		PrimeArray[i] = true;
	for (int i = 2; (i*i) <= n; i++) {
		if (PrimeArray[i])
			for (int j = i * i; j <=n; j += i) 
					PrimeArray[j] = false;
	}
}
int main()
{
	int N, T;
	scanf("%d", &T);
	Eratos(10000);
	while (T){
		int a, b, min, Ans[2];
		scanf("%d", &N);
		min = N;
		if (N % 2 == 0 && PrimeArray[N / 2])
			printf("%d %d\n", N / 2, N / 2);
		else {
			for (a = N/2 ; a >= 1; a--) {
				if (!PrimeArray[a])
					continue;
				for (b = N / 2; a + b <= N; b++) {
					int temp = (a > b) ? a - b : b - a;
					if (min < temp)
						break;
					if (!PrimeArray[b])
						continue;
					if (a + b == N) {
						if (min > temp) {
							Ans[0] = (a > b) ? b : a;
							Ans[1] = (a > b) ? a : b;
							min = temp;
						}
					}
				}
			}
			printf("%d %d\n", Ans[0], Ans[1]);
		}
		T--;
	}
}