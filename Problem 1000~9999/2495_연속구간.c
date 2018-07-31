#include <stdio.h>
int main()
{
	for (int i = 0; i < 3; i++) {
		char num[10] = { 0 }, before;
		int max = 1, current = 1;
		scanf("%s", num);
		before = num[0];
		for (int j = 1; num[j-1] != 0; j++) {
			if (num[j] == before) 
				current++;
			else {
				if (current > max) 
					max = current;
				current = 1;
			}
			before = num[j];
		}
		printf("%d\n", max);
	}
}