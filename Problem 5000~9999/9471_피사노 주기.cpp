#include <iostream>
using namespace std;
int pisano(int m) {
	  int m1, m2, period;
	  m1 = m2 = 1;
	  period = 0;
	  do
	  {
			int temp = m1;
			m1 = m2;
			m2 = (temp + m2) % m;
			period++;
	  } while (!(m1 == 1 && m2 == 1));
	  return period;
}
int main() {
	  int P, N, M;
	  scanf("%d", &P);
	  while (P) {
			P--;
			scanf("%d %d", &N, &M);
			printf("%d %d\n", N, pisano(M));
	  }
}