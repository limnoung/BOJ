#include <stdio.h>

int main(void) {
	int X, flag=1, count=1, std=1;
	scanf("%d",&X);
	while(1){
		if(X<=std){
			if(flag==1)
				printf("%d/%d",std-X+1,X+count-std);
			else if(flag==0)
				printf("%d/%d",X+count-std,std-X+1);
			break;
		}
		else{
			if(flag==1)
			flag=0;
			else if(flag==0)
			flag=1;
			count++;
			std += count;
		}
	}
}
