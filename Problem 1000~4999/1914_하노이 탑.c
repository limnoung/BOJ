#include <stdio.h>

int N;
void hanoi(int start, int temp, int goal, int n)
{
	if (n == N-1){
		printf("%d %d\n", start, goal);
	}
	else
	{
		hanoi(start, goal, temp, n + 1);
		printf("%d %d\n", start, goal);
		hanoi(temp, start, goal, n + 1);
	}
}
void bigNum(char Num[], int n)
{
	int index;
	for (int i = n; i > 0; i--){
		index = 0;
		while (Num[index] == 0){ index++; }
		while (index < 32){
			Num[index] = (Num[index] - '0') * 2;
			if (Num[index] >= 10){
				Num[index] -= 10;
				if (Num[index - 1] == 0 || Num[index - 1] == '0' )
					Num[index - 1] = '1';
				else
					Num[index - 1]++;
				if (index >= 2 && (Num[index - 1]-'0') >= 10){
					Num[index - 2]++;
					Num[index - 1] -= 10;
				}
			}
			Num[index] += '0';
			index++;
		}
	}
}

int main(){
	char Num[32] = { 0 };
	int temp, index = 1;
	scanf("%d", &N);
	temp = 1;
	for (int i = 1; i <= ((31 < N) ? 31 : N); i++){
		temp *= 2;
	}
	temp--;
	if (N <= 31)
		printf("%d\n", temp);
	else{
		while (temp != 0){
			Num[32 - index++] = (temp % 10) + '0';
			temp /= 10;
		}
		Num[31]++;
		bigNum(Num, N - 31);
		Num[31]--;
		index = 0;
		while (Num[index] == 0){ index++; }
		while (index < 32)
			printf("%c", Num[index++]);
		printf("\n");
	}
	if (N<=20)
		hanoi(1, 2, 3, 0);
}