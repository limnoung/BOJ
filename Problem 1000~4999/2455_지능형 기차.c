#include <stdio.h>

int main(void) {
	int Num[4][2],Max=0,Ans=0;
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<2 ; j++){
			scanf("%d",&Num[i][j]);
		}
		Ans-=Num[i][0];
		Ans+=Num[i][1];
		if(Max<Ans)
		Max=Ans;
	}
	printf("%d",Max);
	
}
