#include <cstdio>
using namespace std;
int main()
{
	int alpha[26] = { 0 }, N, i, check = 0;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		int index = 0;
		char c;
		while ((c = getchar()) != '\n') {
			if (index == 0 && c >= 97 && c <= 122)
				alpha[c - 97]++;
			if (index == 0)
				index++;
		}
	}
	for (i = 0; i < 26; i++) {
		if (alpha[i] >= 5) {
			printf("%c", i + 97);
			check = 1;
		}
	}
	if (check == 0)
		puts("PREDAJA");

}