#include <cstdio>
#include <cstdlib>
#include <cstring>
int main()
{
	int N;
	scanf("%d", &N);
	while (N) {
		char text[10];
		N--;
		scanf("%s", text);
		getchar();
		if (text[1] == '=')
			puts("skipped");
		else {
			int num = 0;
			num += atoi(strtok(text,"+"));
			num += atoi(strtok(NULL,"\0"));
			printf("%d\n", num);
		}
	}
}