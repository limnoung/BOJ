#include <stdio.h>

int Pibonacci(int n)
{
    static int pibo[50];
    if(pibo[n]>0){
        return pibo[n];
    }
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return pibo[n]=Pibonacci(n-1) + Pibonacci(n-2);
}

int main()
{
    int N;
    
    scanf("%d",&N);
    printf("%d",Pibonacci(N));
}