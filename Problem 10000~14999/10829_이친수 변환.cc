#include <iostream>
using namespace std;
int main()
{
	  long long int Num;
	  int index = 0;
	  int num[64] = { 0 };
	  scanf("%lld", &Num);
	  while (Num != 0) {
			num[index++] = Num % 2;
			Num /= 2;
	  }
	  for (int i = index - 1; i >= 0; i--)
			printf("%d", num[i]);
}