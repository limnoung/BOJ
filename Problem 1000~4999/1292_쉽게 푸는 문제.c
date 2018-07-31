#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int A,B,temp=0,i,j;
	int *Num;
	scanf("%d%d",&A,&B);
	Num=(int*)malloc(sizeof(int)*B);
	for(i=1;;i++){ 
		temp+=i;
		if(temp>B)
		break;
	}
	temp=0;
	for(int j=1 ; j<=i ; j++){
		for(int k=1 ; k<=j ; k++){
			Num[temp++]=j;
			if(temp==B)
			break;
		}
	}
	temp=0;
	for(int j=A ; j<=B ; j++)
		temp+=Num[j-1];
	printf("%d",temp);
}
