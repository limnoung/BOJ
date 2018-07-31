#include <stdio.h>
#include <math.h>
int main(){
	int T, K, index, count;
	int arr[1000];

	arr[0] = 2;
	arr[1] = 3;
	arr[2] = 5;
	arr[3] = 7;
	index = 3;
	scanf("%d", &T);
	for (int i = 9; i < 1000; i++){
		count = 0;
		for (int j = 3; j < i; j ++){
			if (i%j == 0){
				count = 1;
				break;
			}
		}
		if (count==0)
			arr[++index] = i;
	}
	for (int m = 0; m < T; m++){
		count = 0;
		scanf("%d", &K);
		for (int i = 0; i < index; i++){
			if (arr[i]>K){
				count = -1;
				break;
			}
			for (int j = i; j < index; j++){
				for (int k = j; k < index; k++){
					if (arr[k]>K){
						count = -1;
						break;
					}
					if (arr[i] + arr[j] + arr[k] == K){
						printf("%d %d %d\n", arr[i], arr[j], arr[k]);
						count = 1;
						break;
					}
				}
				if (count == 1)
					break;
			}
			if (count == 1)
				break;
		}
	}
	if (count == -1)
		printf("0\n");
}