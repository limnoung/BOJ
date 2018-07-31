#include <stdio.h>
int main() {
	int a[3], sum = 0 , check = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
		if (i > 0)
			for (int j = i-1; j >= 0; j--)
				if (a[i] == a[j])
					check++;
	}
	if (sum != 180)
		printf("Error");
	else if (check == 3)
		printf("Equilateral");
	else if (check >0 )
		printf("Isosceles");
	else
		printf("Scalene");
}