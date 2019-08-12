#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	vector<int> input;
	int N, temp, d[1000][2];
	int ans = 0;

	for (int i = 0; i < 1000; i++) {
		d[i][0] = d[i][1] = 1;
	}

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		input.push_back(temp);
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (input[j] < input[i])
				if (d[j][0] + 1 > d[i][0])
					d[i][0] = d[j][0] + 1;
		}
	}
	for (int i = N-2; i >= 0; i--) {
		for (int j =i+1; j <N; j++) {
			if (input[j] < input[i])
				if (d[j][1] + 1 > d[i][1])
					d[i][1] = d[j][1] + 1;
		}
	}

	for (int i = 0; i < N; i++) {
		if (d[i][0] + d[i][1] > ans)
			ans = d[i][0] + d[i][1];
	}
	printf("%d", ans-1);
}
