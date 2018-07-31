#include <stdio.h>

int main(){
	int X,Min,Ans,Remain,i,Count;
	
	scanf("%d", &X);

	Min = 64;
	Remain = X;
	Ans = 0;
	Count = 0;

	if (X == 64)
		Ans = 1;
	else{
		while (Remain != 0){
			if (Count > 7){
				Ans = -1;
				break;
			}
			Min = Min / 2;
			if (Remain == Min){
				Ans++;
				break;
			}
			if (Min < Remain){
				Remain = Remain - Min;
				Ans++;
			}
			Count++;
		}
	}
	printf("%d", Ans);
}