#include <stdio.h>
#include <math.h>

int main()
{
	long long Ans;
	unsigned int N, i, j, Num_length, Sum, Remain;
	unsigned int A[11][11] = { NULL }, B[11][11] = { NULL }, Num[50] = { NULL };

	// Ans : 현재의 값, Ansold : Ans값을 보존하기 위한 변수
	// N : N번째 감소하는 수, Num_length : 숫자의 크기
	
		scanf("%d", &N); // N값을 받아준다.

		for (i = 1; i < 11; i++){ // 초기값 지정 (자리수가 1일때의 가지수)
			A[1][i] = 1;
			B[1][i] = 1;
		}
		Num[0] = 0;  // 초기값 지정 (자리수가 1일때의 N의 최소값)
		Num[1] = 10; // 초기값 지정 (자리수가 2일때의 N의 최소값)
		Sum = 10;    // 초기값 지정 (숫자의 길이를 알게 해주는 값들의 합을 제대로 구하기 위함)
		Ans = 0;

		for (i = 2; i < 11;){// 숫자의 길이를 알게 해주는 값들을 행렬로 정리한다. 
			A[i][1] = 1;
			B[i][1] = 1;
			for (j = 2; j < 12 - i; j++){
				A[i][j] = A[i][j - 1] + B[i - 1][j];
				B[i][j] = A[i][j];
				Sum += A[i][j];
			}
			Sum++;
			Num[i] = Sum; // Num[i] i+1자리수의 N의 최소값
			i++;
		}
		for (i = 0; i < 10; i++){
			if (N >= Num[i] && N < Num[i + 1]) // N으로 숫자의 길이를 구한다.
				break;
		}

		Num_length = i + 1; // 숫자가 3자리라면 Num_length = 3
		Remain = N - Num[i];

		for (i = 1; i < 11; i++){
			for (j = 2; j < 12 - i; j++){
				B[i][j] = B[i][j - 1] + B[i][j]; // 각 자리수의 숫자를 알기 위해 B행렬의 행들의 값들을 누적해준다.
			}
		}
		// 밑부터 수정해야 할 부분 //

		if (Num_length <= 10){ // Remain 값을 이용해 Ans값을 구한다.
				for (i = Num_length; i > 0; i--){
					if (Remain == 0){
						Ans += (i - 1)*(long long)pow(10, (double)i - 1);
					}
					else
					for (j = 1; j <= 10 - Num_length; j++){
						if (Remain >= B[i][j] && Remain < B[i][j + 1]){
							Remain -= B[i][j];
							Ans += (i - 1 + j)*(long long)pow(10, (double)i - 1);
							break;
						}
					}
				}
			}
		// 위까지 수정해야할 부분 //
		else
			Ans = -1;
		printf("%lld\n", Ans);
}

