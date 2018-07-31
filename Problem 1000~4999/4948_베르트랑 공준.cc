#include <iostream>
using namespace std;
bool* PrimeArray;
void Eratos(int n) {
	int count = n;
	PrimeArray = new bool[2*n + 1];
	for (int i = 2; i <= 2*n; i++)
		PrimeArray[i] = true;
	for (int i = 2; (i*i) <= 2*n; i++) {
		if (PrimeArray[i])
			for (int j = i * i; j <=2*n; j += i) {
				if (PrimeArray[j]) {
					PrimeArray[j] = false;
					if (j > n)
						count--;
				}
			}
	}
	printf("%d\n", count);
}
int main()
{
	int N;
	while (1) {
		scanf("%d", &N);
		if (N == 0)
			return 0;
		else
			Eratos(N);
	}
}