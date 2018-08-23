#include <cstdio>

int main()
{
	char num[1000001] = { 0 };
	int sum = 0, count = 1, i;
	scanf("%s", &num);
	for (i = 0; num[i] >= '0' && num[i] <= '9'; i++)
		sum += num[i] - '0';
	if (i<=1) 
		count = 0;
	else{
		while (sum >= 10) {
			int temp = 0;
			count++;
			while (sum != 0) {
				temp += sum % 10;
				sum /= 10;
			}
			sum = temp;
		}
	}
	printf("%d\n", count);
	if (sum % 3 == 0)
		printf("YES");
	else
		printf("NO");
}