#include <iostream>
using namespace std;

int main(){

	int N, M, i, j, k, Count,temp,length,Max;
	char Num[51][51];
	//N, M : 숫자를 입력받는 배열의 행과 열
	//i, j, k : 반복문에 쓰일 인덱스 값들 정의
	//Count : 

	Count = 0;
	temp = 0;
	Max = 0;

	cin >> N; cin >> M;

	for (i = 0; i < N; i++){
		for (j = 0; j < M; j++){
			cin >> Num[i][j];
		}
	}
	i = 0; j = 0;
	while (i != N && j != M){ 
		temp = Num[i][j]; //기준점
		for (k = j ; k < M; k++){
			if (temp == Num[i][k]){ //기준이 되는 행에서 자신과 같은 
			 //열의 값을 찾아 Temp2에다 변의 길이를 대입
				length = k - j + 1;
				Count++;
				if (i + length - 1 < N && j + length - 1 < M){ 
					//비교하는 대상의 행렬의 값의 범위안에 있어야 한다. 
					if (temp == Num[i + k - j][j])
						Count++;
					if (temp == Num[i + k - j][k])
						Count++;
				}
			}
			if (Count == 3)
				if (length*length > Max)
					Max = length*length;
			Count = 0;
		}
		if (j == M - 1){
			i++;
			j = 0;
		}
		else
			j++;
	}
	cout << Max;
}