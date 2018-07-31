#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
char Map[25][25] = { '0' };
int Count[25][25] = { 0 };
int cnt = 0, N;
int cal(int i, int j)
{
	  if (i >= N || j >= N || i<0 || j<0)
			return 0;
	  Count[i][j] = 1;
	  cnt--;
	  if (Count[i - 1][j] == 0 && i>0) // North
			cal(i - 1, j);
	  if (Count[i][j + 1] == 0)  // East
			cal(i, j + 1);
	  if (Count[i][j - 1] == 0 && j>0) // West
			cal(i, j - 1);
	  if (Count[i+1][j] == 0) // South
			cal(i+1, j);
}
int main() {
	  int i, j, origin;
	  vector <int> Number;
	  scanf("%d", &N);
	  getchar();
	  for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				  scanf("%c", &Map[i][j]);
				  if (Map[i][j] == '0')
						Count[i][j] = 1;
				  else
						cnt++;
			}
			getchar();
	  }
	  i = 0; j = 0;
	  while (cnt != 0) {
			origin = cnt;
			for (i = 0; i < N; i++) {
				  for (j = 0; j < N; j++) {
						if (Count[i][j] == 0)
							  break;
				  }
				  if (Count[i][j] == 0 && i != N && j!=N)
						break;
			}
			cal(i, j);
			Number.push_back(origin - cnt);
	  }
	  sort(Number.begin(), Number.end());
	  printf("%d\n", Number.size());
	  for (int i = 0; i < Number.size(); i++)
			printf("%d\n", Number[i]);
}
