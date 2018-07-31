#include <stdio.h>

int main(void) {
	int N,temp,i,j;
	int A[1000];
	scanf("%d",&N);
	for(i=0 ; i<N ; i++)
		scanf("%d",&A[i]);
	for(i=0 ; i<N ; i++){
		temp = A[i];
		j=i;
		while(j>0 && A[j-1]>temp){
			A[j] = A[j-1];
			j--;
		}
		A[j]=temp;
	}
	for(i=0 ; i<N ; i++)
		printf("%d\n",A[i]);

}
