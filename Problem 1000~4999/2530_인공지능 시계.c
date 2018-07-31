#include <stdio.h>

int main()
{
	int A,B,C,D;
	int hour, min, sec;
	scanf("%d %d %d",&A,&B,&C);
	scanf("%d",&D);
    
    hour = (D / 3600);
    A = A + hour;
    D = D - 3600 * hour;
    
    min = (D / 60);
    B = B + min;
    D = D - 60 * min;
    
    sec = D;
    C = C + sec;

    while(C>60)
    {
        B++;
        C = C - 60;
    }
    while(B>60)
    {
        A++;
        B = B - 60;
    }
    while(A>24)
    {
        A = A - 24;
    }
    printf("%d %d %d",A,B,C);
        
    
}