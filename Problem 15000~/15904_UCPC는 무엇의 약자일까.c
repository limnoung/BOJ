#include <stdio.h>
#include <string.h>
int main() {
	char text[1005];
	char find[4] = { 'U','C','P','C' };
	char *p1 = NULL;
	int i = 0;
	fgets(text, sizeof(text), stdin);
	p1 = strchr(text, find[i++]);
	while (p1 != NULL && i < 4) 
		p1 = strchr(p1, find[i++]);
	if (i == 4 && p1 !=NULL)
		printf("I love UCPC");
	else 
		printf("I hate UCPC");
}