#include <stdio.h>

int main(void) {
	int M,N,A[10000],Count=0;
	int Sum=0, Min=10000;
	
	scanf("%d%d",&M,&N);
	for(int i=M ; i<=N ; i++){
		for(int j=i-1 ; j>=1 ; j--){
			if(j==1)
			A[Count++]=i;
			else if(i%j==0)
			break;
		}
	}
	for(int i=0 ; i<Count ; i++){
		Sum += A[i];
		if(Min > A[i])
		Min = A[i];
	}
	if(Count==0)
	printf("-1");
	else
	printf("%d\n%d",Sum,Min);
}
