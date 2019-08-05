#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	bool prime[1000001] = { 0 };
	char number[101] = { 0 };
	int K;

	scanf("%s %d", &number, &K);
	for (int i = 0; i <= 1000000; i++) {
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= K; i++)
	{
		if (prime[i] == false)
			continue;
		for (int j = i + i; j <= K; j += i) {
			prime[j] = false;
		}
	}
	for (int n = 2; n <= K; n++) {
		vector<int> mo;
		int sum = 0, num = 0, index;
		if (prime[n] == false)
			continue;
		else {
			if (number[1] != 0) {
				num = (number[0] - '0') * 10 + number[1] - '0';
				index = 2;
			}
			else {
				num = number[0] - '0';
				index = 1;
			}
			while (num >= n || number[index] != 0) {
				int mok = num / n;
				int left = num % n;
				mo.push_back(mok);
				left = num - mok * n;
				if (number[index] != 0)
					num = left * 10 + number[index++] - '0';
				else
					num = left;
			}
		}
		if (num%n == 0) {
			index = 0;
			for (; mo.at(index) == 0; index++);
			for (int i = index; i < mo.size(); i++) {
				sum *= 10;
				sum += mo.at(i);
				if (sum > 1000000)
					break;
			}
			if(sum<=1000000){
				if (sum < K || n < K) {
					printf("BAD %d", (n > sum) ? sum : n);
					return 0;
				}
			}
			else
			{
				if ( n < K) {
					printf("BAD %d", (n > sum) ? sum : n);
					return 0;
				}
			}


		}
	}
	printf("GOOD");
	return 0;
}
