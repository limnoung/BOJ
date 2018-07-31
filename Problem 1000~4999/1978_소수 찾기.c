#include <stdio.h>

int main(void) {
	int N,A[100],Count=0;
	
	scanf("%d",&N);
	for(int i=0 ; i<N ; i++)
		scanf("%d",&A[i]);
	for(int i=0 ; i<N ; i++){
		for(int j=A[i]-1 ; j>=1 ; j--){
			if(j==1)
			Count++;
			else if(A[i]%j==0)
			break;
		}
	}
	printf("%d",Count);
}
