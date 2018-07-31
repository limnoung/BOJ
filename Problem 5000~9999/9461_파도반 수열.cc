#include <iostream>
using namespace std;

int main(){
	int N, X, i;
    long long Num[100] = {1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
    for(i=10 ; i < 100 ; i++){
        Num[i] = Num[i-1] + Num[i-5];
    }
    cin >> N;
	for (i = 0; i < N; i++){
		cin >> X;
        cout << Num[X-1] << endl;
	}
}
	