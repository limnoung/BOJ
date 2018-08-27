#include <cstdio>
int main()
{
	int count = 1, num[5] = { 0 }, index = 0;
	for (int i = 0; i < 5; i++) 
		scanf("%d", &num[i]);
	while (1) {
		for (int i = 0; i < 5; i++) {
			if (num[i] == count)
				count++;
		}
		if (count == 6)
			break;
		else
			count = 1;
		if (num[index] > num[index + 1]) {
			int temp;
			temp = num[index];
			num[index] = num[index + 1];
			num[index + 1] = temp;
			for (int i = 0; i < 5; i++)
				printf("%d ", num[i]);
			printf("\n");
		}
		if (index == 3)
			index = 0;
		else
			index++;
	}
}