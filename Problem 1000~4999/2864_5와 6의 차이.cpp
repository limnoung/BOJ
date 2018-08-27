#include <cstdio>
#include <cstdlib>
int main()
{
	char a[8] = { 0 }, b[8] = { 0 };
	scanf("%s %s", a, b);
	for (int i = 0; i < 8; i++) {
		if (a[i] == '6')
			a[i] = '5';
		if (b[i] == '6')
			b[i] = '5';
	}
	printf("%d ", atoi(a) + atoi(b));
	for (int i = 0; i < 8; i++) {
		if (a[i] == '5')
			a[i] = '6';
		if (b[i] == '5')
			b[i] = '6';
	}
	printf("%d", atoi(a) + atoi(b));
}