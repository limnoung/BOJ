#include <stdio.h>
int main()
{
	int n, num, max, temp, check, check2;
	temp = check = check2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num == 0) // 0�� input�Ǿ����� �Ǵ�
			check = 1;
		if (i == 0) { // �ʱ� max, temp�� ����
			temp = max = num;
			if (max < 0)
				check2 = 1;
		}
		else { // ù��° �Է��� �ƴҶ�
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
			else if (temp > max) // ���������� ���� ���ڸ� max���� ��
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