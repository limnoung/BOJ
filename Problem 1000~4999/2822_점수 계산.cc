#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int score;
	vector<pair<int, int>> v;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &score);
		v.push_back(make_pair(score, i + 1));
	}
	sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
		return a.first > b.first;
	});
	sort(v.begin(),v.begin()+5, [](const pair<int, int> &a, const pair<int, int> &b) {
		return a.second < b.second;
	});
	score = 0;
	for (int i = 0; i < 5; i++) 
		score += v.at(i).first;
	printf("%d\n", score);
	for (int i = 0; i < 5; i++) 
		printf("%d ", v.at(i).second);
}
