#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, a, b;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(b, a));
	}
	sort(v.begin(), v.end()); // 소트함수
	int ans = 0;
	int cur = -1000;
	for (int i = 0; i < n; i++) {
		if (v[i].second >= cur) {
			cur = v[i].first;
			ans++;
		}
	}
	cout << ans << endl;
}