#include <iostream>
#include <string.h>
using namespace std;
int queue[10001], Size = 0;
int main()
{
	  int N, num;
	  char order[6];
	  scanf("%d", &N);
	  for (int i = 0; i < N; i++) {
			scanf("%s", order);
			if (!strcmp(order,"push")) {
				  scanf("%d", &num);
				  queue[Size++] = num;
			}
			else if (!strcmp(order, "pop")) {
				  if (Size != 0) {
						printf("%d\n", queue[0]);
						for (int i = 0; i < Size; i++)
							  queue[i] = queue[i + 1];
						Size--;
				  }
				  else
						printf("-1\n");
			}
			else if (!strcmp(order, "size")) {
				  printf("%d\n", Size);
			}
			else if (!strcmp(order, "empty")) {
				  if (Size == 0)
						printf("1\n");
				  else
						printf("0\n");
			}
			else if (!strcmp(order, "front")) {
				  if (Size == 0)
						printf("-1\n");
				  else
						printf("%d\n", queue[0]);
			}
			else if (!strcmp(order, "back")) {
				  if (Size == 0)
						printf("-1\n");
				  else
						printf("%d\n", queue[Size-1]);
			}
	  }
}