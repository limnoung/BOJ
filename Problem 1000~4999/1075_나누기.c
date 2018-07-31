#include <stdio.h>

int main(void) {
	unsigned long int N;
	int F,temp,i;
	
	scanf("%lu%d",&N,&F);
	temp=(N/100)%F;
	temp*=100;
	for(i=temp;i<temp+100;i++){
		if(i%F==0)
		break;
	}
	i-=temp;
	if(i<10)
	printf("0%d",i);
	else
	printf("%d",i);
}
