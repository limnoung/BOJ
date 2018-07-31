#include <stdio.h>


int main()
{
    int A[50],B[50],C[50],N,temp,ans;
	
	ans = 0;

	scanf("%d",&N);

	for(int i = 0 ; i<N ; i++)
		scanf("%d",&A[i]);
	for(int i = 0 ; i<N ; i++){
		scanf("%d",&B[i]);
		C[i] = B[i];
	}

	for(int i = 0 ; i<N ; i++){
		for(int j = 0 ; j<N ; j++){
			if(A[i]<A[j]){
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
			if(C[i]>C[j]){
				temp = C[i];
				C[i] = C[j];
				C[j] = temp;
			}
		}
	}

	for(int i = 0 ; i<N ; i++){
		ans += A[i]*C[i];
	}

	printf("%d",ans);
}