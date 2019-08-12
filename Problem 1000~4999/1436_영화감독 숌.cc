#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main()
{
	int N, temp;
	int count = 666;
	scanf("%d", &N);
	
	while (N) {
		int index = 0;
		temp = count;
		while (count) {
			if (count % 10 == 6)
				index++;
			else
				index = 0;
			count /= 10;
			if (index == 3)
				break;
		}
		count = temp;
		if (index == 3) {
			N--;
			index = 0;
		}
		count++;
	}
	printf("%d", temp);
}