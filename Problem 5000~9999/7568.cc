#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
struct du {
	int weight;
	int height;
	int rank;
	int order;
};
int main() {
	int N, a, b;
	int rank = 1;
	int count = 0;
	vector<du> v;
	scanf("%d", &N); 
	for(int i=0 ; i<N ; i++){
		du d;
		scanf("%d %d", &a, &b);
		d.weight = a;
		d.height = b;
		d.rank = 1;
		d.order = i;
		v.push_back(d);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j == i)
				continue;
			else {
				if (v.at(i).weight < v.at(j).weight && v.at(i).height < v.at(j).height)
					v.at(i).rank++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", v.at(i).rank);
	}
}
