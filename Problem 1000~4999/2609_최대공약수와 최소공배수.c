#include <stdio.h>

int main(void) {
	int N,M;
	scanf("%d%d",&N,&M);
	for(int i=(N>M)?N:M;i>=1;i--){
		if(N%i==0&&M%i==0){
			printf("%d\n",i);
			break;
		}
	}
	for(int i=(N>M)?N:M;;i++){
		if(i%N==0&&i%M==0){
			printf("%d",i);
			break;
		}
	}
}
