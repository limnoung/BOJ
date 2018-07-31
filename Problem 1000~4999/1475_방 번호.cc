#include <iostream>
using namespace std;
int main()
{
	  char A[8];
	  int Count[10] = { 0 }, max = 0;
	  
	  scanf("%s", &A);
	  for (int i = 0; i < 8; i++) {
			if (A[i] >= 48 && A[i] <= 57) {
				  Count[A[i] - 48]++;
			}
			else
				  break;
	 }
	  Count[6] = (Count[6] + Count[9] + 1) / 2;
	  for (int i = 0; i < 9; i++)
			if (max < Count[i])
				  max = Count[i];
	  printf("%d", max);
}