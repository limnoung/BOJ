#include <cstdio>
int T[50] = { 0 }; 
int main(){
	int K;
	for (int i = 0; i < 50; i++)
		T[i] = (i+1)*(i + 2) / 2;
	scanf("%d", &K);
	while (K){
		int n, count = 0;
		K--;
		scanf("%d", &n);
		if (count != 1){
			for (int i = 0; i < 50; i++){
				for (int j = i; j < 50; j++){
					for (int k = j; k < 50; k++){
						if (T[i] + T[j] + T[k]>n){
							break;
						}
						else if (T[i] + T[j] + T[k] == n){
							printf("1\n");
							count = 1;	
						}
					}
					if (count == 1)
						break;
				}
				if (count == 1)
					break;
			}
		}
		if (count != 1)
			printf("0\n");
	}
}