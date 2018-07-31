#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int H[9][2], count = 0, sum = 0, temp;
	srand(time(NULL));
	for (int i = 0; i < 9; i++) {
		scanf("%d", &H[i][0]);
		H[i][1] = 0;
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8 - i; j++) {
			if (H[j][0] > H[j + 1][0]) {
				temp = H[j][0];
				H[j][0] = H[j + 1][0];
				H[j + 1][0] = temp;
			}
		}
	}
	temp = 0;
	while (1) {
		if (count == 7) {
			if (sum == 100) {
				for (int i = 0; i < 9; i++) {
					if (H[i][1] == 1)
						printf("%d\n", H[i][0]);
				}
				break;
			}
			else {
				count = 0;
				sum = 0;
				for (int i = 0; i < 9; i++) {
					if (H[i][1] == 1)
						H[i][1] = 0;
				}
			}
				
		}
		else {
			while (count != 7) {
				if (temp < 0 || temp > 8 || H[temp][1] == 1)
					temp = rand() % 10;
				else if (H[temp][1] == 0) {
					sum += H[temp][0];
					H[temp][1] = 1;
					count++;
				}
			}
		}
	}
}