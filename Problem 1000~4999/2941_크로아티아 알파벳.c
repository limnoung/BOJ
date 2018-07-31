#include <stdio.h>
#include <string.h>
int main() {
	char a[101];
	char b[8][3] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	int check = 0;
	int index = 0;
	int answer = 0;
	scanf("%s", a);
	while (a[index] != '\0') {
		check = 0;
		for (int i = 0; i < 8; i++) {
			if (i != 2) {
				if (strncmp(a + index, b[i], 2) == 0) {
					check++;
					break;
				}
			}
			else if (strncmp(a + index, b[i], 3) == 0) {
				check += 2;
				break;
			}
		}
		if (check == 1) {
			index++;
			answer++;
		}
		else if (check == 2) {
			index += 2;
			answer++;
		}
		else
			answer++;
		index++;
	}
	printf("%d", answer);
}
               