#include <cstdio>
int main()
{
	char c;
	int sum = 0, index = 1;
	while ((c = getchar()) != '#') {
		if (c == '\n') {
			printf("%d\n", sum);
			index = 0;
			sum = 0;
		}
		else if(c!=' ')
			sum += (c - 'A'+1)*index;
		index++;
	}
}