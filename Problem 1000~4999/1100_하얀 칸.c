#include <stdio.h>

int main(void) {
	char check;
	int temp=0,Ans=0,flag=0;
	for(int i=1 ; i<=8 ; i++){
		if(flag==1)
			flag=0;
		else
			flag=1;
		for(int j=1 ; j<=8 ;j++){
			temp++;
			check=getchar();
			if(temp%2==flag)
				if(check=='F')
					Ans++;
		}
		getchar();
	}
	printf("%d",Ans);
}
