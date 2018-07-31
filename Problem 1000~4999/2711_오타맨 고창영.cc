#include <iostream>
using namespace std;

int main()
{
	int T, N, A[100];
	char Word[80];

	cin >> T; 
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cin >> Word;
		while (Word[N] != NULL)
		{
			Word[N - 1] = Word[N];
			N++;
		}
		Word[N-1] = NULL;
		cout << Word << endl;
	}
}