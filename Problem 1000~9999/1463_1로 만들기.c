#include <stdio.h>
int time = -1;
int Cal(int pos, int count) {
	int temp = count;
	if (time != -1)
		if (temp > time)
			return 0;
	if (pos <= 0)
		return 0;
	if (pos == 1) {
		if (time == -1)
			time = temp;
		else if(time > temp)
			time = temp;
	}
	temp++;
	if (pos % 3 == 0)
		Cal(pos / 3, temp);
	if (pos % 2 == 0)
		Cal(pos / 2, temp);
	Cal(pos - 1, temp);
}
int main() {
	int N;
	scanf("%d", &N);
	Cal(N, 0);
	printf("%d", time);
}