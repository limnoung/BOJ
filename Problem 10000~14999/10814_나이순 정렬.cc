#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
struct member
{
	int age;
	string name;
	int order;
};
bool compare(member a, member b) {
	if (a.age == b.age)
		return a.order < b.order;
	else
		return a.age < b.age;
}
vector<member> v;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	char y[102];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		member m;
		scanf("%d %s", &x, &y);
		m.age = x;
		m.name = y;
		m.order = i;
		v.push_back(m);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << v.at(i).age << " " << v.at(i).name << '\n';
	}

}
