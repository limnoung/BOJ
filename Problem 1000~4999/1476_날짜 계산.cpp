#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	int e, s, m;
	int year = 1;
	scanf("%d %d %d", &a, &b, &c);
	e = s = m = 1;
	while (e != a || s != b || m != c) {
		year++;
		e++;
		s++;
		m++;
		if (e > 15)
			e = 1;
		if (s > 28)
			s = 1;
		if (m > 19)
			m = 1;
	}
	printf("%d", year);
}
