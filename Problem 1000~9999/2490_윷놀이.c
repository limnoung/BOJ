#include <stdio.h>

int main(void) {
	int Yut[3][4],Count;
	for(int i=0 ; i<3 ; i++){
	Count=0;
		for(int j=0 ; j<4 ; j++){
			scanf("%d",&Yut[i][j]);
			if(Yut[i][j]==1)
				Count++;
		}
	if(Count==0)
	printf("D");
	if(Count==1)
	printf("C");
	if(Count==2)
	printf("B");
	if(Count==3)
	printf("A");
	if(Count==4)
	printf("E");
	printf("\n");
	}
}
