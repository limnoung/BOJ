#include <stdio.h>
int main() {
	char Memo[105];
	int index=1;
	scanf("%s", &Memo);
	printf("%c", Memo[0]);
	while (Memo[index]!=NULL) {
		if (Memo[index] == 45)
			printf("%c", Memo[index + 1]);
		index++;
	}
}