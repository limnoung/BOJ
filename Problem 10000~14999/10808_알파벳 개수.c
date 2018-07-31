#include <stdio.h>
int main() {
	char alpha[105];
	int count, index, current;
	scanf("%s", &alpha);
	current = 'a';
	while (current <= 'z') {
		index = 0;
		count = 0;
		while (alpha[index] != NULL) {
			if (alpha[index] == current)
				count++;
			index++;
		}
		current++;
		printf("%d ", count);
	}
}