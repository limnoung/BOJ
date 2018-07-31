#include <stdio.h>
 
 
int d(int x,int A[]){
	int ans=x;
	while(x!=0){
	ans += x % 10;
	x = x/10;
	}
	if(ans<10000){
	A[ans-1]=0;
	return d(ans,A);
	}
}
int main(void) {
	int A[10000];
	for(int i=0 ; i<10000 ; i++)
	A[i]=1;
	for(int i=1 ; i<=10000 ; i++)
	d(i,A);
	for(int i=0 ; i<9999 ; i++){
		if(A[i]==1){
			printf("%d\n",i+1);
		}
	}
}