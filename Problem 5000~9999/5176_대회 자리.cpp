#include <stdio.h>
int main(){
	int K, P, M, temp;
	scanf("%d", &K);
	while (K){
		char check[500] = { 0 };
		int Ans = 0;
		K--;
		scanf("%d %d", &P, &M);
		for (int i = 0; i < P; i++){
			scanf("%d", &temp);
			if (check[temp - 1] == 0 && temp<=M)
				check[temp - 1] = 1;
			else
				Ans++;
		}
		printf("%d\n", Ans);
	}
}