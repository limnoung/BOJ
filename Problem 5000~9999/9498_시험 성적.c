#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	printf((a>=90)? "A" : (a>=80)? "B" : (a>=70)? "C" : (a>=60)? "D" : "F");
}
