#include <cstdio>
int main()
{
	char c, ans[101] = { 0 }, index = 0;
	while ((c = getchar()) != '\n') {
		if (c >= 'a'&&c <= 'z') {
			ans[index++] = c - 'a' + 'A';
		}
		else if (c >= 'A' && c <= 'Z') {
			ans[index++] = c - 'A' + 'a';
		}
	}
	printf("%s", ans);
}