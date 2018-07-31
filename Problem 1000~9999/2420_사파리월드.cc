#include <iostream>
using namespace std;


int main()
{
	long long N, M;
	unsigned long long result;

	cin >> N; cin >> M;
	if (N - M >= 0)
		result = N - M;
	else
		result = M - N;

	cout << result;
}