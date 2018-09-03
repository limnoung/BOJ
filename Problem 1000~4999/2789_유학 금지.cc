#include <stdio.h>
int main(){
	char c;
	while ((c = getchar()) != '\n'){
		if (c == 'C' || c == 'A' || c == 'M' || c == 'B' || c == 'R' || c == 'I' || c == 'D' ||
			c == 'G' || c == 'E'){
		}
		else
			printf("%c", c);
	}
}