#include <stdio.h>
int main()
{
	int N, temp, num[10000] = { 0 }, index;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &temp);
		num[temp-1]++;
	}
	temp = 0;
	index = 0;
	while (temp < N){
		if (num[index] != 0){
			printf("%d\n", index + 1);
			num[index]--;
			temp++;
		}
		else{
			while (num[index] == 0){ index++; }
		}
	}
}