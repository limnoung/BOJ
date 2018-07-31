#include <stdio.h>
int main(void) {
	int N;
	scanf("%d",&N);
	if(N==0)
	N=1;
	for(int i=N-1 ; i>1 ; i--)
	N*=i;
	printf("%d",N);
}
