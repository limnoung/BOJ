#include <stdio.h>

int main() {
	char Word[1000000];
	int Max = 0, Count[26] = { 0 }, index = 0;
	scanf("%s", Word);
	while (Word[index] != NULL) {
		if (Word[index] < 91)
			Count[Word[index] - 65]++;
		else
			Count[Word[index] - 97]++;
		index++;
	}
	for (int i = 1; i < 26; i++) 
		if (Count[Max] < Count[i])
			Max = i;
	for (int i = 0; i < 26; i++) {
		if (Max == i)
			i++;
		if (Count[Max] == Count[i]) {
			Max = -1;
			break;
		}
	}
	if (Max != -1)
		printf("%c", Max + 65);
	else
		printf("?");
}