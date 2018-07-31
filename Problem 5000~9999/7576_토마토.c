#include <stdio.h>
int arr[1000][1000];
int queue[1000000] = { 0 };
int index = 0, head = 0, tail = 0, count2=0;
int main() {
	int N, M, temp=0;
	int count = 0, x, y, basichead;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			temp = 0;
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1) {
				temp += i * 1000;
				temp += j;
				queue[index++] = temp;
				tail++;
				count++;
			}
		}
	}
	temp = 0;
	basichead = tail;
	while (1) {
		if (head>tail)
			break;
		else {
			x = queue[head] / 1000;
			y = queue[head] % 1000;
			if (arr[x - 1][y] == 0 && x>0 && y<N && x<M+1) {
				queue[index++] = (x - 1) * 1000 + y;
				arr[x - 1][y] = 1;
				count++;
				count2++;
				tail++;
			}
			if (arr[x + 1][y] == 0 && x<M-1 && y<N) {
				queue[index++] = (x + 1) * 1000 + y;
				arr[x + 1][y] = 1;
				count++;
				count2++;
				tail++;
			}
			if (arr[x][y - 1] == 0 && x<M && y>0 && y<N+1) {
				queue[index++] = x * 1000 + y - 1;
				arr[x][y - 1] = 1;
				count++;
				count2++;
				tail++;
			}
			if (arr[x][y + 1] == 0 && x<M && y<N-1) {
				queue[index++] = x * 1000 + y + 1;
				arr[x][y + 1] = 1;
				count++;
				count2++;
				tail++;
			}
			head++;
			if (head == basichead) {
				/*for (int i = 0; i < M; i++) {
					for (int j = 0; j < N; j++) {
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");*/
				if (count2 != 0) {
					temp++;
					count2 = 0;
				}
				basichead = tail;
			}
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 0) {
				printf("-1");
				return 0;
			}
			else if(i == M - 1 && j == N - 1)
				printf("%d", temp);
		}	
	}
	
}