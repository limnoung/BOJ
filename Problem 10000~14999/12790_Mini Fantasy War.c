#include <stdio.h>
int main()
{
	int T, hp, mp, atk, def;
	int stat[4];
	int equip[4];
	scanf("%d", &T);
	for (int i = 0; i < T; i++){
		for (int j = 0; j < 4; j++)
			scanf("%d", &stat[j]);
		for (int j = 0; j < 4; j++)
			scanf("%d", &equip[j]);
		hp = (stat[0] + equip[0])>=1?stat[0]+equip[0]:1;
		mp = (stat[1] + equip[1]) >= 1 ? stat[1] + equip[1] : 1;
		atk = (stat[2] + equip[2]) >= 0 ? stat[2] + equip[2] : 0;
		def = stat[3] + equip[3];
		printf("%d\n", hp + (5 * mp) + (2 * atk) + (2 * def));
	}
}