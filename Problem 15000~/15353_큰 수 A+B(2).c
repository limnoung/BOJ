#include <stdio.h>
#define SIZE 10001
int main()
{
	  char A[SIZE + 1] = { 0 }, B[SIZE + 1] = { 0 };
	  int size_A = 0, size_B = 0, index = 0, base = 1;
	  int size, i, j, temp;
	  short remain_A[SIZE/4] = { 0 }, remain_B[SIZE/4] = { 0 };
	  short Ans[SIZE/4] = { 0 };
	  scanf("%s %s", A, B);
	  while (A[size_A] != 0) { size_A++; }
	  while (B[size_B] != 0) { size_B++; }
	  size = (size_A < size_B) ? size_B : size_A;
	  size_A--; size_B--;
	  for ( i = size_A; i >= 0; i -= 4) {
			base = 1; temp = 0;
			for ( j = i;( j > i - 4&&j >= 0); j--) {
				  temp += (A[j]-'0') * base;
				  base *= 10;
			}
			remain_A[index++] = temp % 10000;
	  }
	  index = 0;
	  for (i = size_B; i >= 0; i -= 4) {
			base = 1; temp = 0;
			for (j = i; (j > i - 4 && j >= 0); j--) {
				  temp += (B[j] - '0') * base;
				  base *= 10;
			}
			remain_B[index++] = temp % 10000;
	  }
	  for (int i = 0; i <= size / 4; i++) {
			if(Ans[i] + remain_A[i] + remain_B[i]<10000)
				  Ans[i] += remain_A[i] + remain_B[i];
			else {
				  Ans[i + 1] = (Ans[i] + remain_A[i] + remain_B[i]) / 10000;
				  Ans[i] = (Ans[i] + remain_A[i] + remain_B[i]) % 10000;
			}
	  }
	  temp = 0; // count 0확인
	  if (Ans[size / 4] != 0)
			printf("%d", Ans[size / 4]);
	  else
			temp = 1;
	  for (int i = (size / 4)-1; i >= 0; i--) {
			if (temp == 1) {
				  if (Ans[i] != 0) {
						printf("%d", Ans[i]);
						temp = 0;
				  }
			}
			else {
				  if (Ans[i] < 10)
						printf("000");
				  else if (Ans[i] < 100)
						printf("00");
				  else if (Ans[i] < 1000)
						printf("0");
				  printf("%d", Ans[i]);
			}
	  }
}