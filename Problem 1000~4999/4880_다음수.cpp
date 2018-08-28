#include <cstdio>
int main()
{
	int num[3];
	while (1) {
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		if (num[0] == 0 && num[1] == 0 && num[2] == 0)
			break;
		if ((double)num[2]/num[1] == (double)num[1]/num[0])
			printf("GP %d\n", num[2] * (int)num[2]/num[1]);
		else if (num[2]-num[1]==num[1]-num[0])
			printf("AP %d\n", num[2] + (num[2]-num[1]));
	}
}