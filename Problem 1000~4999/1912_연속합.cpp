#include <stdio.h>
int main()
{
	int n, num, max, temp, check, check2;
	temp = check = check2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num == 0) // 0이 input되었는지 판단
			check = 1;
		if (i == 0) { // 초기 max, temp값 설정
			temp = max = num;
			if (max < 0)
				check2 = 1;
		}
		else { // 첫번째 입력이 아닐때
			if (max < 0) {
				if (check2 == 1)
				{
					if (num > max)
						max = num;
					check2 = 0;
				}
				else if (temp > max)
					max = temp;
			}
			else if (temp > max) // 그전까지의 합한 숫자를 max값과 비교
				max = temp;
			if (temp + num < 0) {
				temp = 0;
				check2 = 1;
			}
			else {
				temp += num;
				check2 = 0;
			}
		}
	}
	if ((temp >= 0 || max >= 0) && temp > max) {
		if (check == 0) {
			if ((temp > 0 || max > 0) && temp > max)
				max = temp;
		}
		else
			max = temp;
	}
	printf("%d", max);
}