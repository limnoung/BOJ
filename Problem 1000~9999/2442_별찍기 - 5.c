#include <stdio.h>
int main(void) {
	int N;
	scanf("%d",&N);
	for(int i=0 ; i<N ; i++){
		for(int j=0 ; j<N-i-1 ; j++)
			printf(" ");
		for(int j=1; j<=(2*i)+1 ; j++)
			printf("*");
		if(i!=N-1)
			printf("\n");
		
	}
}