#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
bool compare(pair<int, int>a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else
		return a.second < b.second;
}
int main()
{
	vector<pair<int, int>> v;
	int N, x, y;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", v.at(i).first, v.at(i).second);
	}

}
