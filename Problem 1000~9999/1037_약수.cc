#include <iostream>
using namespace std;

int main()
{
	int Num, A[50], i, j, LCM, GCM, MIN, MAX;

	MIN = 1000000;
	MAX = 0;

	cin >> Num;
	for (i = 0; i < Num; i++) // A[i] 입력
		cin >> A[i];

	for (i = 0; i < Num; i++){ // A[i]중 최대값을 찾는다
		if (MAX < A[i])
			MAX = A[i];
	}
	if (Num == 1) // 약수 개수가 1일때
		A[Num - 1] = A[0] * A[0];
	else{ // 약수 개수가 1이 아닐때
		for (i = 0; i < Num - 1; i++){
			for (j = 1; j <= A[i]; j++){ 
				if (A[i] % j == 0 && A[i + 1] % j == 0)
					GCM = j; // 최대공약수
			}
			if (MIN > GCM)
				MIN = GCM;
			// 최대공약수를 이용해 최소공배수를 구한다.
			LCM = GCM * (A[i] / GCM) * (A[i + 1] / GCM); 
			/* 이때 구한 최소공배수를 다시 계산해주기 위해 
			 행렬에 넣는다.*/
			A[i + 1] = LCM; 
		}
	}
	if (MAX == A[Num-1]) // 행렬의 값과 최소공배수가 같은지 검사
		// 같다면 최대공약수중 제일 작은 값을 곱해준다
		A[Num - 1] = A[Num - 1] * MIN; 
	cout << A[Num-1];
}
