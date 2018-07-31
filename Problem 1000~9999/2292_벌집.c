#include <stdio.h>

int main(void) {
	int N,Count=6,Std=1;
	scanf("%d",&N);
	for(int i=1 ; ;i++){
		if(N <= Std){
			printf("%d",i);
			break;
		}
		else{
			Std += Count;
			Count += 6;
		}
	}
}
