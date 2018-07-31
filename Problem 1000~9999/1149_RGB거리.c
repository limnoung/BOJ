#include <stdio.h>
#define MIN(a,b) (a>b?b:a)
int main()
{
	  int N, RGB[1000][3], Ans[1000][3] = { 0 };
	  scanf("%d", &N);
	  for (int i = 0; i < N; i++) {
			for (int j = 0; j < 3; j++) {
				  scanf("%d", &RGB[i][j]);
			}
			if (i > 0) {
				  Ans[i][0] = RGB[i][0] + MIN(Ans[i-1][1], Ans[i-1][2]);
				  Ans[i][1] = RGB[i][1] + MIN(Ans[i-1][0], Ans[i-1][2]);
				  Ans[i][2] = RGB[i][2] + MIN(Ans[i-1][0], Ans[i-1][1]);
			}
			else if (i == 0)
			{
				  Ans[i][0] = RGB[i][0];
				  Ans[i][1] = RGB[i][1];
				  Ans[i][2] = RGB[i][2];
			}
	  }
	  printf("%d", MIN(Ans[N-1][0], MIN(Ans[N-1][1], Ans[N-1][2])));
}