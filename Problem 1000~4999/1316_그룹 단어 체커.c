#include <stdio.h>
#include <string.h>
int main() {
	int N;
	char a[150] = {0};
	int index;
	int answer = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 150; j++)
			a[j] = 0;
		index = 0;
		scanf("%s", a);
		while (a[index] != NULL) {
			char * pch;
			char text;
			char * temp;
			pch = strchr(a+index, a[index]);
			while (pch != NULL) {
				temp = pch;
				pch = strchr(pch + 1, a[index]);
				if (pch != temp + 1)
					break;
			}
			if (pch != NULL)
				break;
			text = a[index];
			while (a[index] == text)
				index++;
			if(a[index]==NULL)
				answer++;
		}
	}
	printf("%d", answer);
}
               