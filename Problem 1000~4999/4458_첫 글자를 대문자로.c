#include <stdio.h>
#include <ctype.h>
int main(){
	int N;
	scanf("%d", &N);
	getchar();
	while (N) {
		char text[35];
		N--;
		fgets(text, sizeof(text), stdin);
		if (islower(text[0]))
			text[0] = toupper(text[0]);
		printf("%s", text);
	}
}