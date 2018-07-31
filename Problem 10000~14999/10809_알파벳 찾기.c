#include <stdio.h>

int main(void) {
	char S[100];
	int count;
	scanf("%s",S);
	for(int i=0 ; i<26 ; i++){
		count=0;
		for(int j=0 ; ;j++){
			if(S[j]==97+i){
				printf("%d ",j);
				break;
			}
			else if(S[j]==NULL){
				printf("-1 ");
				break;
			}
		}
	}
}
