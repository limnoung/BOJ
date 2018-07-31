#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	  int M;
	  char order[7] = "";
	  int num, S = 0;
	  scanf("%d", &M);
	  for (int i = 0; i < M; i++)
	  {
			scanf("%s", &order);
			switch (order[0]) {
			case 'a':
				  if (order[1] == 'd') {
						scanf("%d", &num);
						S |= 1 << (num - 1);
				  }
				  else if (order[1] == 'l') 
						S = (1 << 20) - 1;
				  break;
			case 'e':
				  S = 0;
				  break;
			case 'r':
				  scanf("%d", &num);
				  S &= ~(1 << num-1);
				  break;
			case 'c':
				  scanf("%d", &num);
				  if (S&(1 << (num - 1)))
						printf("1\n");
				  else
						printf("0\n");
				  break;
			case 't':
				  scanf("%d", &num);
				  if (S&(1 << (num - 1)))
						S &= ~(1 << num - 1);
				  else
						S |= (1 << num - 1);
			}
	  }
}