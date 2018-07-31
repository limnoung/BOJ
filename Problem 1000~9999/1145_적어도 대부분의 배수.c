#include <stdio.h>
int main(void) {
	int Num[5], Divide=0, Count;
	for(int i=0 ; i<5 ; i++)
		scanf("%d",&Num[i]);
	while(1){
		Count=0;
		Divide++;
		for(int i=0 ; i<5 ; i++)
			if(Divide%Num[i]==0)
				Count++;
		if(Count>=3){
			printf("%d",Divide);
			break;
		}
	}
}
