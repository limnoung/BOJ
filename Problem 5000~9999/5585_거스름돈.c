#include <stdio.h>
int bill[6] = {500,100,50,10,5,1};
int cal(int value,int count)
{
	int temp = value;
	if (temp == 0)
		return count;
	for(int i = 0; i < 6; i++){
		if (temp >= bill[i]){
			temp -= bill[i];
			count++;
			break;
		}
	}
	return cal(temp,count);
}
int main()
{
	int value;
	scanf("%d", &value);
	value = 1000 - value;
	printf("%d", cal(value,0));
}