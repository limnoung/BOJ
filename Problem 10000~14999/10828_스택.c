#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int stack[10005] = { 0 };
void push(int N) {
	int array[10005] = { 0 };
	int index = 0;
	array[0] = N;
	while (stack[index] != NULL) {
		array[index + 1] = stack[index];
		index++;
	}
	index = 0;
	while (array[index] != 0) {
		stack[index] = array[index];
		index++;
	}
}
int pop() {
	int index = 0;
	if (stack[0] != 0) {
		printf("%d\n", stack[0]);
		while (stack[index + 1] != 0) {
			stack[index] = stack[index + 1];
			index++;
		}
		stack[index] = 0;
	}
	else
		printf("-1\n");
}
void size() {
	int index = 0;
	while (stack[index] != 0)
		index++;
	if (index == 0)
		printf("0\n");
	else
	printf("%d\n", index);
}
void empty() {
	if (stack[0]==0)
		printf("1\n");
	else
		printf("0\n");
}
void top() {
	if (stack[0]==0)
		printf("-1\n");
	else
		printf("%d\n", stack[0]);
}
int main() {
	int N,num;
	char *token;
	char order[15];
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		for (int i = 0; i < 11; i++)
			order[i] = NULL;
		gets(order);
		if (order[0] == 'p') {
			if (order[1] == 'u') {
				token = strtok(order, " ");
				token = strtok(NULL, "\n");
				num = atoi(token);
				push(num);
			}
			else
				pop();
		}
		else if (order[0] == 's') 
			size();
		else if (order[0] == 'e')
			empty();
		else if (order[0] == 't')
			top();
	}

}