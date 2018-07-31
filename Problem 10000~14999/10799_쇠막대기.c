#include <stdio.h>
char A[100001] = "";
int ind[100000] = { 0 };
int main()
{
	  int count, index, ans, count2;
	  int razor = 0;
	  index = 0; ans = 0;
	  count = 0; count2 = 0;
	  while (1) {
			scanf("%c", &A[index]);
			if (A[index] == '\n' || A[index] == 0)
				  break;
			else {				 
				  if (A[index] == '(') {
						if (count2 > 0)
							  ans -= count;
						count++;
						count2 = -1;
				  }
				  else if (A[index] == ')') {
						count--;
						if (count2 == -1) {
							  ans += count;
							  razor++;
						}
						else if (count2 == 0)
							  ans += count + 1;
						count2++;
				  }
				  index++;
			}
	  }
	  if (razor == 1 && index <= 2)
			printf("0");
	  else
			printf("%d", ans);
}
