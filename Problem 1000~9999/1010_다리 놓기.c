#include <stdio.h>
int Combination(int n, int r){
	static int C[31][31];
	if(C[n][r]!=0)
	return C[n][r];
	if(r==1)
	return C[n][r]=n;
	else if(n==0 || n==r)
	return C[n][r]=1;
	else
	return C[n][r]=Combination(n-1,r-1)+Combination(n-1,r);
	
}
int main(void) {
	int T,N,M;
	scanf("%d",&T);
	for(int i=0 ; i<T ; i++){
		scanf("%d%d",&N,&M);
		printf("%d\n",Combination(M,N));
	}
}
