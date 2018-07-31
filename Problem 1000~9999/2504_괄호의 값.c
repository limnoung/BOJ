#include <stdio.h>
int main(void) {
	char stack[31] = { 0 };
	int index = 0, i = 0, j = 0;
	int count = 0, temp, ans =  0;
	int count2;
	scanf("%s", stack);
	while (1) {
		if (i < 0 || j < 0) {
			count = -1;
			break;
		}
		if (i == 0 && j == 0)
		{
			count2 = 0;
			temp = 1;
		}
		if (stack[index] == '(') {
			temp *= 2;
			i++;
			count2 = 0;
		}
		else if (stack[index] == ')') {
			if (index > 0 && stack[index - 1] == '[') {
				count = -1;
				break;
			}
			if (count2!=1) {
				count2 = 1;
				ans += temp;
			}
			temp /= 2;
			i--;
		} 
		else if (stack[index] == '[') {
			temp *= 3;
			j++;
			count2 = 0;
		}
		else if (stack[index] == ']') {
			if (index > 0 && stack[index - 1] == '(') {
				count = -1;
				break;
			}
			if (count2!=1) {
				count2 = 1;
				ans += temp;
			}
			temp /= 3;
			j--;
		}
		else
		{
			if (i != 0 || j != 0) {
				count = -1;
			}
			break;
		}
		index++;
	}
	if (count == -1)
		printf("0\n");
	else 
	{
		temp = 0;
		printf("%d", ans);
	}
}