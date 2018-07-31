#include <stdio.h>

int main(void) {
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	if(A<=B){
		if(B<=C)
			printf("%d",B);
		else if(A<=C)
			printf("%d",C);
		else
			printf("%d",A);
	}
	else if(B<=C){
		if(C<=A)
			printf("%d",C);
		else
			printf("%d",A);
	}
	else
		printf("%d",B);
}
