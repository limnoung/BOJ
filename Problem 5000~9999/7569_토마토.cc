#include <stdio.h>
#include <queue>
using namespace std;
short tomato[105][105][105];
int M, N, H;
int check(short tomato[][105][105]) {
	  queue<int> q;
	  int count = M * N*H, count2 = 0, day = -1;
	  int head = 0, tail = 0;
	  for (int i = 0; i < H; i++) {
			for (int j = 0; j < N; j++) {
				  for (int k = 0; k < M; k++) {
						if (tomato[i][j][k] == 1) {
							  q.push(i * 10000 + j * 100 + k);
							  tail++;
						}
						else if (tomato[i][j][k] == -1)
							  count--;
				  }
			}
	  }
	  while (!q.empty()) {
			int temp = q.front();
			int i = temp / 10000;
			int j = (temp / 100) % 100;
			int k = temp % 100;

			head++;
			if (tomato[i][j][k] == 1) {
				  tomato[i][j][k] = 2;
				  count--;
			}
			q.pop();
			if (tomato[i + 1][j][k] == 0) { // front
				  q.push((i + 1) * 10000 + j * 100 + k);
				  tomato[i + 1][j][k] = 1;
				  count2++;
			}
			if (i > 0 && tomato[i - 1][j][k] == 0) {  // back
				  q.push((i - 1) * 10000 + j * 100 + k);
				  tomato[i - 1][j][k] = 1;
				  count2++;
			}
			if (j > 0 && tomato[i][j - 1][k] == 0) {  // up
				  q.push(i * 10000 + (j - 1) * 100 + k);
				  tomato[i][j - 1][k] = 1;
				  count2++;
			}
			if (tomato[i][j + 1][k] == 0) { // down
				  q.push(i * 10000 + (j + 1) * 100 + k);
				  tomato[i][j + 1][k] = 1;
				  count2++;
			}
			if (k > 0 && tomato[i][j][k - 1] == 0) { // left
				  q.push(i * 10000 + j * 100 + k - 1);
				  tomato[i][j][k - 1] = 1;
				  count2++;
			}
			if (tomato[i][j][k + 1] == 0) {  // right
				  q.push(i * 10000 + j * 100 + k + 1);
				  tomato[i][j][k + 1] = 1;
				  count2++;
			}
			if (head == tail) {
				  day++;
				  tail = count2;
				  head = count2 = 0;
			}
	  }
	  if (count != 0)
			return -1;
	  else
			return day;
}
int main()
{
	  int count = 0;
	  scanf("%d %d %d", &M, &N, &H);
	  count = M*N*H;
	  for (int i = 0; i < 105; i++) {
			for (int j = 0; j < 105; j++) {
				  for (int k = 0; k < 105; k++)
						tomato[i][j][k] = -1;
			}
	  }
	  for (int i = 0; i < H; i++) {
			for (int j = 0; j < N; j++) {
				  for (int k = 0; k < M; k++) {
						scanf("%hd", &tomato[i][j][k]);
						if (tomato[i][j][k] == -1)
							  count--;
				  }
			}
	  }
	  if (count == 0)
			printf("-1");
	  else
			printf("%d",check(tomato));

}