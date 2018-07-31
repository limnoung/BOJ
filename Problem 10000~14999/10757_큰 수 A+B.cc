#include <iostream>
using namespace std;
int main()
{
	  char A[15000], B[15000];
	  int size_A, size_B, sum, size, i;
	  short Ans[15000] = { 0 };
	  scanf("%s %s", A, B);
	  for (size_A = 0; A[size_A] != 0; size_A++) {}
	  for (size_B = 0; B[size_B] != 0; size_B++) {}
	  size_A--; size_B--;
	  size = (size_A < size_B) ? size_B : size_A;
	  for (i = size+1; i >0; i--) {
			if (size_A >= 0 && size_B >= 0) {
				  sum = (A[size_A] - '0') + (B[size_B] - '0');
				  size_A--; size_B--;
			}
			else if (size_A >= 0) {
				  sum = A[size_A] - '0';
				  size_A--;
			}
			else if(size_B>=0){
				  sum = B[size_B] - '0';
				  size_B--;
			}
			Ans[i] += sum;
			Ans[i - 1] += Ans[i] / 10;
			Ans[i] = Ans[i] % 10;
	  }
	  i = 0;
	  while (Ans[i] == 0) { i++; }
	  for (; i <= size+1; i++) {
			printf("%d", Ans[i]);
	  }
}