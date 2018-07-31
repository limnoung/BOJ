#include <iostream>
using namespace std;

int main(){
	int N, Ans, Num[6], i;

	cin >> N;
	if (N < 100){
		Ans = N;
	}
	else if (N < 111){
		Ans = 99;
	}
	else{
		Ans = 99;
		Num[0] = 0;
		Num[5] = 100;
		for (i = 1; i < N / 100; i++){
			Ans += 5;
		}
		if (i % 2 == 0){
			Num[0] += (i/2) *10;
		}
		else{
			Num[0] += (i / 2 + 1) * 10;
			Num[0]++;
		}
		for (int j = 1; j < 5; j++){
			Num[j] = Num[j - 1] + 12;
		}
		N = N % 100;
		for (int j = 0; j <= 4; j++){
			if ((N<Num[j + 1]) && (N>=Num[j])){
				Ans += j+1;
				break;
			}
		}
	}
	cout << Ans;
}
