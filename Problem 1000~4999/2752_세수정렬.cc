#include <cstdio>
using namespace std;
int a[3], t;
int main()
{
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	for(int i=0 ; i<2 ; i++)
		for (int j = i + 1; j < 3; j++) {
			if (a[i] > a[j])
				t = a[i], a[i] = a[j], a[j] = t;
		}
	printf("%d %d %d", a[0], a[1], a[2]);
}