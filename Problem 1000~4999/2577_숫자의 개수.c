#include <stdio.h>

int main(void) {
	int A,B,C,Count,Ans;
	char result[10];
	scanf("%d%d%d",&A,&B,&C);
	Ans = A*B*C;
	for(int i=0 ; i<10 ; i++){
		if(Ans==0)
		result[i] = -1;
		else{
		result[i] = Ans%10;
		Ans = Ans/10;
		}
	}
	for(int j=0 ; j<10 ; j++){
		Count=0;
		for(int k=0 ; k<10 ; k++){
			if(result[k]==-1)
			break;
			if(result[k]==j)
			Count++;
		}
		printf("%d\n",Count);
	}
}
