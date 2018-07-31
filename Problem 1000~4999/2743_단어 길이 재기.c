#include <stdio.h>
int main() {
	char text[101];
	fgets(text, sizeof(text), stdin);
	for (int i = 0; i < 101; i++)
		if (text[i] == 0 || text[i] == '\n') {
			printf("%d", i);
			break;
		}
}