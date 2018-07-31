#include <stdio.h>
int Paper[3] = { 0 };
short num[2187][2187] = { 0 };
int check(short num[][2187], int i, int j, int size) {
	  short x = i - size, y = j - size;
	  short temp = num[x][y];
	  if (size == 1) {
			Paper[temp + 1]++;
			return 0;
	  }
	  else {
			for (int a = i - size; a < i; a++) {
				  for (int b = j - size; b < j; b++) {
						if (temp != num[a][b]) {
							  for (int c = 1; c <= 3; c++) {
									for (int d = 1; d <= 3; d++)
												check(num, x + size / 3 * c, y + size / 3 * d, size / 3);
							  }
							  return 0;
						}
				  }
			}
	  }
	  Paper[temp + 1]++;
}
int main()
{
	  int N;
	  scanf("%d", &N);
	  for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				  scanf("%hd", &num[i][j]);
	  }
	  check(num, N, N, N);
	  for (int i = 0; i < 3; i++)
			printf("%d\n", Paper[i]);
}
