#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(A,B) (A>B)?A:B
typedef struct {
	  unsigned char * data;
	  int size;
} BIG_DECIMAL;

BIG_DECIMAL createDecimal(unsigned char *str, int size)
{
	  unsigned char * s1 = (unsigned char*)malloc(sizeof(unsigned char)*(size + 1));
	  BIG_DECIMAL temp = { NULL,0 };
	  strcpy((char *)s1, (char*)str);
	  temp.size = size;
	  temp.data = s1;
	  return temp;
}

BIG_DECIMAL BD_addition(BIG_DECIMAL *dec1, BIG_DECIMAL *dec2)
{
	  char A[2100] = "", B[2100] = "", S[2100] = "";
	  int size_A, size_B, sum, size, i, j;
	  size_A = dec1->size;
	  size_B = dec2->size;
	  size = MAX(size_A, size_B);
	  strcpy(A, (char*)dec1->data);
	  strcpy(B, (char*)dec2->data);
	  size_A--; size_B--;
	  for (i = size; i > 0; i--) {
			if (size_A >= 0 && size_B >= 0) {
				  sum = (dec1->data[size_A] - '0') + (dec2->data[size_B] - '0');
				  size_A--; size_B--;
			}
			else if (size_A >= 0) {
				  sum = dec1->data[size_A] - '0';
				  size_A--;
			}
			else if (size_B >= 0) {
				  sum = dec2->data[size_B] - '0';
				  size_B--;
			}
			S[i] += sum;
			S[i - 1] += S[i] / 10;
			S[i] = S[i] % 10;
	  }
	  for (i = 0; i <= size; i++) // add pivot num(48)
			S[i] += '0';
	  i = 0;
	  if (S[i] == '0') { // reverse
			j = 0;
			while (S[j] != 0) {
				  S[j] = S[j + 1];
				  j++;
			}
			i++;
	  }
	  return createDecimal(S, size - i + 1);
}
BIG_DECIMAL fib(int n) {
	  BIG_DECIMAL fibonacchi[10001] = { { "0",1 },{ "1",1 },{ NULL,0 } };
	  BIG_DECIMAL temp = { NULL,0 };
	  for (int i = 2; i <= n; i++) {
			temp = BD_addition(&fibonacchi[i - 2], &fibonacchi[i - 1]);
			fibonacchi[i] = createDecimal(temp.data, temp.size);
	  }
	  return fibonacchi[n];
}
int main()
{
	  int a;
	  scanf("%d", &a);
	  printf("%s", fib(a).data);
}