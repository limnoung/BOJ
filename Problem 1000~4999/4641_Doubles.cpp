#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	int a;
	do {
		vector<int> v;
		int count = 0;
		do {
			scanf("%d", &a);
			if (a != 0)
				v.push_back(a);
		} while (a > 0);
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v.size(); j++) {
				if (i == j)
					continue;
				else if ((float)v.at(i) / 2 == (float)v.at(j)) {
					count++;
					break;
				}
			}
		}
		if(a==0)
			printf("%d\n", count);
	} while (a != -1);
}