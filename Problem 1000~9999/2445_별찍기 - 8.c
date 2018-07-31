#include <stdio.h>

int main(void) {
	int N;
	scanf("%d",&N);
	for(int i=1; i<=N-1 ; i++){
		for(int j=0 ; j<i ; j++)
			printf("*");
		for(int j=2*(N-i) ; j>=1 ; j--)
			printf(" ");
		for(int j=0 ; j<i ; j++)
			printf("*");
	printf("\n");
	}
	for(int i=1 ; i<=2*N ; i++)
		printf("*");
	printf("\n");
	for(int i=N-1 ; i>=1 ; i--){
		for(int j=i ; j>=1 ; j--)
			printf("*");
		for(int j=1 ; j<=2*(N-i) ; j++)
			printf(" ");
		for(int j=i ; j>=1 ; j--)
			printf("*");
		printf("\n");
	}
}