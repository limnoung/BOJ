#include <stdio.h>

int main(void) {
	int T,count,ans;
	char A[80];
	scanf("%d",&T);
	for(int i=0 ; i<T ; i++){
		scanf("%s",A);
		ans=0;
		count=0;
		for(int j=0 ; A[j]!=NULL ; j++){
			if(A[j]=='O'){
				if(j>0 && A[j-1]=='O')
					count++;
				else
					count=1;
			}
			if(A[j]=='X'){
				count=0;
			}
			ans += count;
		}
		printf("%d\n",ans);
	}
}
