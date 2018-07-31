#include <stdio.h>
int main() {
	char Text[101];
	int index = 0;
	scanf("%s", Text);
	while (Text[index] != NULL) {
		if (index>9 && index % 10 == 0)
			printf("\n");
			printf("%c", Text[index]);
		index++;
	}
}