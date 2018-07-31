#include <stdio.h>

int main() {
	char c[101];
	while (scanf("%[^\n]\n",c)==1){
		printf("%s\n", c);
	}
}