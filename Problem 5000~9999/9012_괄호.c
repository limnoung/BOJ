#include <stdio.h>

int main(void){
	int T;
	char stack[51] = {0}; 
	int index = 0, i;
	int count;

	scanf("%d", &T);

	while (T>0){
		for (int i = 0; i < 51; i++)
			stack[index] = 0;
		index = 0;
		count = 0;
		i = 0;
		scanf("%s", stack);
		while (1){
			if (i < 0){
				count = -1;
				break;
			}
			if (stack[index] == '('){
				i++;
			}
			else if (stack[index] == ')'){
				i--;
			}
			else
			{
				if (i != 0)
					count = -1;
				break;
			}
			index++;
		}
		if (count == -1)
			printf("NO\n");
		else
			printf("YES\n");
		T--;
	}
}