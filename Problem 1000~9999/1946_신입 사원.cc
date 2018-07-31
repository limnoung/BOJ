#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> p[100000];
int compare_f(pair<int, int> a, pair<int, int>b) {
	  if (a.first < b.first)
			return 1;
	  else
			return 0;
}
int main()
{
	  int T, N, check, ans;
	  scanf("%d", &T);
	  while (T) {
			check = 0;
			ans = 0;
			scanf("%d", &N);
			for (int i = 0; i < N; i++) {
				  scanf("%d %d", &p[i].first, &p[i].second);
			}
			sort(p, p + N, compare_f);
			check = p[0].second;
			ans++;
			for (int i = 1; i < N; i++) {
				  if (p[i].second < check) {
						ans++;
						check = p[i].second;
				  }
			}
			printf("%d\n", ans);
			T--;
	  }
}