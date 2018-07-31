#include <stdio.h>
#define SIZE 100000
int main()
{
	  char A[SIZE+1] = { 0 }, B[SIZE+1] = { 0 };
	  scanf("%s %s", A, B);
	  for (int i = 0; i < SIZE; i++)
			printf("%c", (A[i] == '1' && B[i] == '1') ? '1' : '0');
	  printf("\n");
	  for (int i = 0; i < SIZE; i++)
			printf("%c", (A[i] == '1' || B[i] == '1') ? '1' : '0');
	  printf("\n");
	  for (int i = 0; i < SIZE; i++)
			printf("%c", ((A[i] == '1' && B[i] == '1')||(A[i]=='0' && B[i]=='0')) ? '0' : '1');
	  printf("\n");
	  for (int i = 0; i < SIZE; i++)
			printf("%c", (A[i] == '0') ? '1' : '0');
	  printf("\n");
	  for (int i = 0; i < SIZE; i++)
			printf("%c", (B[i] == '0') ? '1' : '0');
}