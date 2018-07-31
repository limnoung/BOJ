#include <stdio.h>

int main(void) {
	int A,B,Base=1,Ans2=0;
	int Ans=0,temp;
	scanf("%d%d",&A,&B);
	while((A>0 || B>0) && Base<=10000){
		temp=0;
		temp+=A%10;
		temp+=B%10;
		A/=10;
		B/=10;
		Ans+=temp*Base;
		if(temp>=10)
		Base*=100;
		else
		Base*=10;
		
	}
	if(Base>10000){
		Base=1;
		while(A>0 || B>0){
		temp=0;
		temp+=A%10;
		temp+=B%10;
		A/=10;
		B/=10;
		Ans2+=temp*Base;
		if(temp>=10)
		Base*=100;
		else
		Base*=10;
		}
	printf("%d",Ans2);
	}
	printf("%d",Ans);
}