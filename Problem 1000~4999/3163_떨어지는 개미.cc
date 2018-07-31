#include <iostream>
#include <utility>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
vector <pair<int, int>> position;
vector <pair<int,int>> ans;
vector <int> remain;
deque <int> remain2;
int main()
{
	  int T, N, L, k;
	  int pos, id;
	  int i, j;
	  cin >> T;
	  for (i = 0; i < T; i++) {
			cin >> N >> L >> k;
			position.clear(); ans.clear();
			remain.clear(); remain2.clear();
			for (j = 0; j < N; j++) {
				  cin >> pos >> id;
				  position.push_back(pair<int, int>(pos, id));
				  if (position[j].second < 0)
						remain.push_back(position[j].first*-1);
				  else
						remain.push_back(L - position[j].first);
			}
			sort(position.begin(), position.end());
			sort(remain.begin(), remain.end());
			for (j = 0; j < N; j++) {
				  if (remain[j] > 0)
						break;
				  else
						remain2.push_front(remain[j] * -1);
			}
			for (j = N - 1; j >= 0; j--) {
				  if (remain[j] < 0)
						break;
				  else
						remain2.push_back(remain[j]);
			}
			for (j = 0; j < N; j++)
				  ans.push_back(make_pair(remain2[j], position[j].second));
			sort(ans.begin(), ans.end());
			cout << ans[k - 1].second << endl;
	  }
}
