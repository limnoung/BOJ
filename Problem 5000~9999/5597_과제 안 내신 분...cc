#include <iostream>
using namespace std;
int main()
{
	int Num[30] = { 0 };
	int num;
	for (int i = 0; i < 28; i++) {
		cin >> num;
		Num[num - 1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (Num[i] == 0)
			printf("%d\n", i + 1);
	}
}