#include <stdio.h>

int main()
{
	long long int x, y, z, left, right, mid,a;
	while (scanf("%llu %llu", &x, &y) != EOF) {
		z = (y * 100) / x;
		left = 0;
		right = 2000000001;

		if (z >= 99)
			printf("%d\n", -1);
		else {
			while (left <= right) {
				mid = (left + right) / 2;
				a = (y + mid) * 100 / (x + mid);

				if (z < a)
					right = mid - 1;
				else
					left = mid + 1;

			}
			printf("%llu\n", left);
		}
	}
}