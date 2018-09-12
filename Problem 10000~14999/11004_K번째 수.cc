#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N, K, t;
	vector<int> v;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", &t);
		v.push_back(t);
	}
	nth_element(v.begin(), v.begin()+K-1, v.end());
	printf("%d", v.at(K-1));
}