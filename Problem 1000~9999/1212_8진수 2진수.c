#include <stdio.h>
int main() {
	char bin[3];
	int oct, temp=-1,count=0;
	while (1) {
		oct = getchar();
		oct -= '0';
		for (int i = 2; i >= 0; i--) {
			bin[i] = oct % 2;
			oct /= 2;
			if (bin[i] < 0) {
				if (count == 0)
					printf("0");
				return 0;
			}
		}
		if (count == 0) {
				for (int i = 0; i < 3; i++) {
					if (bin[i] == 1) {
						count++;
						temp = i;
						break;
					}
				}
				if (temp != -1) {
					for (int i = temp; i < 3; i++) {
						printf("%d", bin[i]);
					}
				}
			}
		else {
			for (int i = 0; i < 3; i++) {
				printf("%d", bin[i]);
			}
		}
	}
}
