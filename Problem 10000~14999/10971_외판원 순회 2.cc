#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N, min = 10000001;
	int W[10][10] = { 0 };
	vector<int> v;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for(int j=0 ; j<N ; j++)
			scanf("%d", &W[i][j]);
	}
	for (int i = 0; i < N; i++)
		v.push_back(i);
	do {
		int cur = 0;
		int count = 0;
		for (int i = 0; i < v.size()-1; i++) {
			if (W[v.at(i)][v.at(i + 1)] != 0)
				cur += W[v.at(i)][v.at(i + 1)];
			else
				count++;
		}
		if (W[v.back()][v.front()] != 0)
			cur += W[v.back()][v.front()];
		else
			count++;
		if(count==0 && min>cur)
			min = cur;
	} while (next_permutation(v.begin(), v.end()));
	printf("%d", min);
}