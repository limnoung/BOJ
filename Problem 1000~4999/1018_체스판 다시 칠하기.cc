#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main()
{
	char map[51][51] = { 0 };
	string s[2] = { "BWBWBWBW", "WBWBWBWB" };
	int M, N, min;
	int count, count2, check;
	scanf("%d %d", &N, &M);
	getchar();
	min = M * N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%c", &map[i][j]);
		}
		getchar();
	}
	for (int k = 0; k <= N-8; k++) {
		for (int l = 0; l <= M-8; l++) {
			count = 0;
			count2 = 0;
			check = 1;
			for (int i = k; i < k+8; i++) {
				if (check == 1)
					check = 0;
				else
					check = 1;
				for (int j = l; j < l+8; j++) {
					if (map[i][j] != s[0][j-l]) {
						if (check == 0)
							count++;
						else
							count2++;
					}
					if (map[i][j] != s[1][j-l]) {
						if (check == 0)
							count2++;
						else
							count++;
					}
				}
			}
			if (min > count)
				min = count;
			if (min > count2)
				min = count2;
		}
	}
	printf("%d", min);
}

