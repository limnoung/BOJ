#include <stdio.h>
int main(){
	const int a[6] = { 1, 2, 3, 3, 4, 10 };
	const int b[7] = { 1,2,2,2,3,5,10 };
	int N, Ans, temp, index = 0;
	scanf("%d", &N);
	while (index<N){
		index++;
		Ans = 0;
		for (int i = 0; i < 6; i++){
			scanf("%d", &temp);
			Ans += temp*a[i];
		}
		for (int i = 0; i < 7; i++){
			scanf("%d", &temp);
			Ans -= temp*b[i];
		}
		printf("Battle %d: ", index);
		if (Ans < 0)
			printf("Evil eradicates all trace of Good\n");
		else if (Ans == 0)
			printf("No victor on this battle field\n");
		else
			printf("Good triumphs over Evil\n");
		
	}
}