#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	int N, M, Ans = 0;
	scanf("%d %d", &N, &M);
	map<string, int>m;
	char a[21] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf("%s", a);
		m[a]++;
	}
	for (int i = 0; i < M; i++) {
		scanf("%s", a);
		m[a]++;
	}
	map<string, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second == 2)
			Ans++;
	}
	printf("%d\n", Ans);
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second == 2)
			cout << it->first << endl;
	}
}