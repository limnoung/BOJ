#include <stdio.h>
int main(){
	int N, a, b, c;
	scanf("%d", &N);
	while (N){
		N--;
		scanf("%d %d %d", &a, &b, &c);
		if ((b - c) > a)
			printf("advertise\n");
		else if ((b - c) == a)
			printf("does not matter\n");
		else
			printf("do not advertise\n");
	}
}