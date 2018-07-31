#include <stdio.h>
int main() {
	short a, b, c;
	scanf("%hd %hd %hd", &a, &b, &c);
	if (a*b == c)
		printf("%hd*%hd=%hd", a, b, c);
	else if (a + b == c)
		printf("%hd+%hd=%hd", a, b, c);
	else if (a - b == c)
		printf("%hd-%hd=%hd", a, b, c);
	else if ((double)a / b == (double)c)
		printf("%hd/%hd=%hd", a, b, c);
	else if (b*c == a)
		printf("%hd=%hd*%hd", a, b, c);
	else if (b + c == a)
		printf("%hd=%hd+%hd", a, b, c);
	else if (b - c == a)
		printf("%hd=%hd-%hd", a, b, c);
	else if ((double)b / c == (double)a)
		printf("%hd=%hd/%hd", a, b, c);
}