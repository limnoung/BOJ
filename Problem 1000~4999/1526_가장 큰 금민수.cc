#include <cstdio>
using namespace std;
int main()
{
	int N, check = 0;
	scanf("%d", &N);
	for (int i = N; i >= 4; i--) {
		int num = i;
		check = 0;
		while (num != 0) {
			if (num % 10 != 4 && num % 10 != 7) {
				check = 1;
				break;
			}
			num /= 10;
		}
		if (check == 0) {
			printf("%d", i);
			break;
		}
	}
}