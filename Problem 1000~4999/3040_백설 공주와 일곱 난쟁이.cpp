#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	int num[9] = { 0 }, sum = 0;
	vector<int> a;
	for (int i = 0; i < 9; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (j == i)
				continue;
			else {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j)
						continue;
					else {
						sum += num[k];
						a.push_back(num[k]);
					}
				}
				if (sum == 100 && a.size() == 7) {
					for (int i = 0; i < 7; i++)
						printf("%d\n", a.at(i));
					return 0;
				}
				else {
					a.clear();
					sum = 0;
				}
			}
		}
	}
}