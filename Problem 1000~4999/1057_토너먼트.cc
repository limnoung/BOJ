#include <iostream>
using namespace std;

int main(){
	int N, Num[2], i, Ans;

	cin >> N; cin >> Num[0]; cin >> Num[1];
	i = 1; 
	while (1){
		if (i > 16 || Num[0] > N || Num[1] > N){
			Ans = -1;
			break;
		}
		if ((Num[0] % 2 == 0 && Num[1] == Num[0] - 1) || (Num[1] % 2 == 0 && Num[0] == Num[1] - 1)){
			Ans = i;
			break;
		}
		if (Num[0] % 2 == 1)
			Num[0] = Num[0] / 2 + 1;
		else
			Num[0] = Num[0] / 2;
		if (Num[1] % 2 == 1)
			Num[1] = Num[1] / 2 + 1;
		else
			Num[1] = Num[1] / 2;
		i++;
		if ((Num[0] % 2 == 0 && Num[1] == Num[0] - 1) || (Num[1] % 2 == 0 && Num[0] == Num[1] - 1)||(Num[0]==Num[1])){
			Ans = i;
			break;
		}
	}
	cout << Ans;
}