#include <iostream>
using namespace std;

int main()
{
	int T, N, A[100], sum[10];

	cin >> T; 
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		sum[i] = 0;
		for (int j = 0; j < N; j++)
		{
			cin >> A[j];
			sum[i] += A[j];
		}
		cout << sum[i] << endl;

	}
}