#include <cstdio>
using namespace std;
int Rev(int x)
{
	int origin = x, rev = 0, base = 0;
	while (origin != 0) {
		origin /= 10;
		if (base == 0)
			base = 1;
		else
			base *= 10;
	}
	origin = x;
	while (origin != 0) {
		rev += (origin % 10)*base;
		base /= 10;
		origin /= 10;
	}
	return rev;
}
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", Rev(Rev(x) + Rev(y)));

}