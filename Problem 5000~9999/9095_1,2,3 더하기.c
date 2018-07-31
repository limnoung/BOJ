#include <stdio.h>

int Sum(int N){
	static int Num[11];
	if(Num[N]>0)
	return Num[N];
	if(N==1)
	return 1;
	if(N==2)
	return 2;
	if(N==3)
	return 4;
	if(N<=0)
	return 0;
	else
	return Num[N]=Sum(N-1)+Sum(N-2)+Sum(N-3);
}

int main(void) {
	int T,N;
	scanf("%d",&T);
	for(int i=0 ; i<T ; i++){
		scanf("%d",&N);
		printf("%d\n",Sum(N));
	}
}
