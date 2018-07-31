#include <iostream>
using namespace std;
int main()
{
	  int N, Count_V = 0, Count_H = 0, check;
	  char room[105][105] = { 0 };

	  scanf("%d", &N);
	  getchar();
	  for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				  scanf("%c", &room[i][j]);
			getchar();
	  }
	  for (int i = 0; i < N; i++) {
			check = 0;
			for (int j = 0; j < N; j++) {
				  if (room[i][j] == 'X')
						check = 0;
				  if (j > 0 && check == 0 && room[i][j] == '.' && room[i][j - 1] == '.') {
						Count_H++;
						check = 1;
				  }
			}
	  }
	  for (int i = 0; i < N; i++) {
			check = 0;
			for (int j = 0; j < N; j++) {
				  if (room[j][i] == 'X')
						check = 0;
				  if (j>0 && check==0 && room[j][i] == '.' && room[j - 1][i] == '.') {
						Count_V++;
						check = 1;
				  }
			}
	  }
	  printf("%d %d", Count_H, Count_V);
}