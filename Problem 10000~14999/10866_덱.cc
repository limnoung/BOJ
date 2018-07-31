#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N, X, deq[10000] = { 0 }, front = 0, tail = 0, size = 0;
	char order[11];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		size = tail - front;
		scanf("%s", order);
		if (strstr(order, "push") != NULL) {
			scanf("%d", &X);
			if (strstr(order, "front") != NULL) {
				for (int i = tail; i > front; i--) {
					deq[i] = deq[i - 1];
				}
				deq[front] = X;
				tail++;
			}
			else if (strstr(order, "back") != NULL) {
				deq[tail++] = X;
			}
		}
		else if (strstr(order, "pop") != NULL) {
			if (strstr(order, "front") != NULL) {
				if (size>0) {
					printf("%d\n", deq[front]);
					front++;
				}
				else
					printf("-1\n");
			}
			else if (strstr(order, "back") != NULL) {
				if (size>0) {
					printf("%d\n", deq[tail-1]);
					tail--;
				}
				else
					printf("-1\n");
			}
		}
		else if (strstr(order, "size"))
			printf("%d\n", size);
		else if (strstr(order, "empty"))
			printf("%d\n", (size == 0) ? 1 : 0);
		else if (strstr(order, "front")) {
			if (size>0)
				printf("%d\n", deq[front]);
			else
				printf("-1\n");
		}
		else if (strstr(order, "back")) {
			if (size>0)
				printf("%d\n", deq[tail-1]);
			else
				printf("-1\n");
		}
	}
}