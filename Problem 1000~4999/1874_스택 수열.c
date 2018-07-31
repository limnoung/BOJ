#include <stdio.h>
int main() {
	int N, current=1, index=0, q=0;
	int stack[100005] = { 0 }, seq[100001] = { 0 };
	char order[200000] = { 0 };
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) 
		scanf("%d", &seq[i]);
	for (int i = 1; i <= N; i++) {
		if (seq[i - 1] < seq[i]) {
			if (seq[i] > N) {
				printf("NO");
				return 0;
			}
			for (; current <= seq[i]; current++) {
				stack[index++] = current;
				order[q++] = '+';
			}
		}
		if (stack[--index] == seq[i]) {
			stack[index] = 0;
			order[q++] = '-';
		}
		else {
			printf("NO");
			return 0;
		}
	}
	for (int i = 0; i < 200000; i++) {
		if (order[i] == NULL)
			break;
		else
			printf("%c\n", order[i]);
	}
}