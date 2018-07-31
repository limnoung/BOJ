#include <stdio.h>

int main(void) {
	int Count[1000000],M,N,i;
	scanf("%d%d",&M,&N);
	for(i=2 ; i<=N ; i++)
		Count[i-1]=1;
	for(i=2 ; i<N ; i++){
		if(Count[i-1]==1){
			for(int k=i*2 ; k<=N ; k+=i){
				Count[k-1]=0;
			}
		}
	}
	for(i=M ; i<=N ; i++){
		if(Count[i-1]==1)
		printf("%d\n",i);
	}
}
