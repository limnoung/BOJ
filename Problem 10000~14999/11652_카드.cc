#include <iostream>
#include <map>
using namespace std;
int main() {
	long long int N, a;
	map<long long int, char>m;
	long long int  max = 0;
	scanf("%lld", &N);
	m.insert(make_pair(0, 0));
	for (int i = 0; i < N; i++) {
		scanf("%lld", &a);
		m[a]++;
		if (m[a] > m[max])
			max = a;
		else if (m[a] == m[max]) {
			if (max > a)
				max = a;
		}
	}
	printf("%lld", max);
}