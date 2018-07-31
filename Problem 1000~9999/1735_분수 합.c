#include <stdio.h>

int main(void) {
	int A,B,C,D;
	int i,temp;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	for(i=(B<D)?D:B;i>=1;i--){
		if(B%i==0 && D%i==0)
			break;
	}
	temp=B/i;
	C*=temp;
	temp=D/i;
	A*=temp;
	B*=temp;
	temp=A+C;
	if(temp==B)
	printf("1 1");
	else{
		for(i=(temp<B)?temp:B;i>=1;i--){
			if(temp%i==0 && B%i==0){
				temp/=i;
				B/=i;
			}
		}
	printf("%d %d",temp,B);
	}
	
}
