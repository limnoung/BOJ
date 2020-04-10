#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
bool compare(pair<int, int>a, pair<int, int>b) {
	return a.first < b.first;
}
int main()
{
	char c;
	vector<char> a, b;
	int d[1001] = { 0 }, o[1001] = { 0 };
	int count = 1, index = 1, max = 0;
	while ((c = getchar()) != '\n'){
		a.push_back(c);
	}
	while ((c = getchar()) != '\n') {
		for (int i = 1; i <= a.size(); i++) 
			o[i] = d[i];
		for (int i = 1; i <= a.size(); i++) {
			if (c == a.at(i - 1)) {
				d[i] = o[i - 1] + 1;
			}
			else {
				d[i] = (d[i] > d[i - 1]) ? d[i] : d[i - 1];
			}
			if (d[i] > max)
				max = d[i];
		}
		index++;
	}
	printf("%d", max);
}
