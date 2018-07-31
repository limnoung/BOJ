#include <stdio.h>

int main(void) {
	int x, y;
	int ans=0;
	scanf("%d %d",&x,&y);
	if(x==1)
	ans = y%7;
	else{
		for(int i=x-1; i>=1; i--){
			if(i==1)
			ans += 31;
			if(i==2)
			ans += 28;
			if(i==3)
			ans += 31;
			if(i==4)
			ans += 30;
			if(i==5)
			ans += 31;
			if(i==6)
			ans += 30;
			if(i==7)
			ans += 31;
			if(i==8)
			ans += 31;
			if(i==9)
			ans += 30;
			if(i==10)
			ans += 31;
			if(i==11)
			ans += 30;
			if(i==12)
			ans += 31;
		}
		ans += y;
		ans = ans%7;
	}
	switch(ans){
		case 0:
		printf("SUN");
		break;
		case 1:
		printf("MON");
		break;
		case 2:
		printf("TUE");
		break;
		case 3:
		printf("WED");
		break;
		case 4:
		printf("THU");
		break;
		case 5:
		printf("FRI");
		break;
		case 6:
		printf("SAT");
		break;
	}
	return 0;
}
