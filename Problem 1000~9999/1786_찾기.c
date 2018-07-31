#include <stdio.h>
#include <string.h>
char T[1000001], P[1000001], Temp[1000001];
// 부분 문자열 중 접두사==접미사가 될 수 있는 부분 문자열 중 가장 큰 것의 길이
int Pi[1000001] = { 0 }, Count[1000001] = { 0 };
int main() {
	int i, j, count;
	gets(T);
	gets(P);
	//Pi배열 구하기
	Temp[0] = P[0]; j = 0;
	for (i = 1; i < strlen(P); i++) {
		while (j>0 && P[i] != P[j]) {
			j = Pi[j - 1];
		}
		if (P[i] == P[j])
			Pi[i] = ++j;
	}
	i = 0; j = 0; count = 0;
	for (; i < strlen(T); i++) {
		while (j > 0 && T[i] != P[j])
			j = Pi[j - 1];
		if (T[i] == P[j]) {
			if (j == strlen(P) - 1) {
				Count[count++] = i - strlen(P) + 2;
				j = Pi[j];
			}
			else
				j++;
		}
	}
	printf("%d", count);
	if (count != 0) {
		printf("\n");
		for (i = 0; i < count; i++) {
			printf("%d\n", Count[i]);
		}
	}
}