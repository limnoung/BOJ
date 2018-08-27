#include <cstdio>
int main()
{
	char a[101] = { 0 };
	int check = 0;
	fgets(a, 100, stdin);
	for (int i = 0; a[i] != 0; i++) {
		if (a[i] == 'p') {
			if (check == 1) {
				i++;
				check = 0;
			}
			else
				printf("%c", a[i]);
		}
		else {
			if (a[i] == ' ')
				check = 0;
			else if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
				check = 1;
			}
			printf("%c", a[i]);
		}
	}
}