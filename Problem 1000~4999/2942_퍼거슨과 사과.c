#include <stdio.h>
int calc_gcd(int a, int b)
{
    int r;
    if(a<1 || b<1) return 0;
    if(a<b) return calc_gcd(b,a);
    while((r=a%b)!=0){a=b; b=r;}
    return b;
}
int main()
{
    int R,G,g;
    scanf("%d %d",&R,&G);
    g = calc_gcd(R,G);
    for(int i=1 ; i<=g ; i++)
        if(R%i==0 && G%i==0)
            printf("%d %d %d\n",i,R/i,G/i);
}