#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int N, index = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		v.push_back(i);
	}
	while (v.size()>1) {
		printf("%d ", v.at(index));
		v.erase(v.begin() + index);
		if (index == v.size()) {
			index = 1;
		}
		else {
			index ++;
			if (index == v.size())
				index = 0;
		}
	}
	printf("%d", v.front());
	v.pop_back();
}