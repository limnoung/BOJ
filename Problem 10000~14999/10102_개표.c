#include <stdio.h>
int main()
{
	int N, count = 0;
	char t;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		scanf("%c", &t);
		if (t == 'A')
			count++;
		else if(t=='B')
			count--;
	}
	if (count > 0)
		printf("A");
	else if (count == 0)
		printf("Tie");
	else
		printf("B");
}