#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N, t;
	vector<int> v;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &t);
		v.push_back(t);
	}
	if (next_permutation(v.begin(), v.end())) {
		for (int i = 0; i < v.size(); i++)
			printf("%d ", v.at(i));
	}
	else
		printf("-1");
}