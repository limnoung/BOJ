#include <stdio.h>

int main()
{
	int L,P,answer;
	int A,B,C,D,E;

	scanf("%d %d",&L,&P);
	scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
	
	answer = L * P;
	printf("%d %d %d %d %d",A-answer,B-answer,C-answer,D-answer,E-answer);
}