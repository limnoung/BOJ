#include <stdio.h>
int main() {
	int a, b, type;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a);
		if (i == 0) {
			if (a == 8)
				type = 1;
			else if (a == 1)
				type = 0;
			else
				type = 2;
		}
		else if (type != 2) {
			if (type == 0) {
				if (a != b+1)
					type = 2;
			}
			else if (type == 1) {
				if (a + 1 != b)
					type = 2;
			}
		
		}
		b = a;
	}
	if (type == 0)
		printf("ascending");
	else if (type == 1)
		printf("descending");
	else
		printf("mixed");
}