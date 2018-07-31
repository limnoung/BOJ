#include <stdio.h>

int main() {
	char c;
	int check = 0, check2 = 0, count = 0;
	while ((c = getchar()) != EOF && c != '\n') {
		if (c != 32) {
			if (count == 0)
				count++;
			if (check2 == 1) {
				count++;
				check2 = 0;
			}
			check = 1;
		}
		if (check == 1 && c == 32) {
			check2 = 1;
		}
	}
	printf("%d", count);
}
