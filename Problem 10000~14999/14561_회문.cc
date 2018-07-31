#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	  int T, n, check, i, j;
	  unsigned long long int a;
	  deque <char> num;
	  scanf("%d", &T);
	  for (i = 0; i < T; i++) {
			check = 0;
			num.clear();
			cin >> a >> n;
			while (a != 0) {
				  num.push_front(a%n);
				  a /= n;
			}
			for (j = 0; j < num.size() / 2; j++) {
				  if (num[j] != num[num.size() - j - 1]) {
						check = 1;
						printf("0\n");
						break;
				  }
			}
			if (check == 0)
				  printf("1\n");
	  }
}