#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main(){
	int H, M;
	scanf("%d %d", &H, &M);
	if (M < 45) {
		M = M + 15;
		H--;
	}
	else {
		M -= 45;
	}
	if (H < 0) {
		H += 24;
	}
	printf("%d %d", H, M);
}