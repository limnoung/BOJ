#include <iostream>
using namespace std;
int main(){
    int N,T;
    scanf("%d",&T);
    for(int i=0 ; i<T ; i++){
    scanf("%d",&N);
    if(N<=3||N==6)
        printf("0\n");
    else if(N==4)
        printf("2\n");
    else
        printf("1\n");
    }
}