#include <iostream>
using namespace std;

int main(){
	int N, X, Y, temp, Direction; // N : 테스트 갯수 , X, Y : 방향, Direction : 방향
	int MaxX, MaxY, MinX, MinY;
	char Move[1000] = {}; // 명령어를 저장하는 배열
	enum { up = 0, right, down, left }; // 열거형을 이용해 방향에 숫자를 넣는다



	cin >> N;

	for (int i = 0; i < N; i++){
		MaxX = 0; MaxY = 0; MinX = 0; MinY = 0;
		X = 0; Y = 0; Direction = 0;
		//초기값 지정
		cin >> Move;
		for (int j = 0; j < 1000; j++){
			if (Move[j] == 0){
				temp = j;
				break;
			}
		}
		for (int j = 0; j < temp; j++){
			if (Move[j] == 'R'){ //명령어가 R일때
				if (Direction == 3)
					Direction = 0;
				else
					Direction++;
			}
			if (Move[j] == 'L'){ //명령어가 L일때
				if (Direction == 0)
					Direction = 3;
				else
					Direction--;
			}
			if (Move[j] == 'F'){ //명령어가 F일때
				switch (Direction){ //방향에 따라서 좌표값 이동
				case up:
					Y++;
					break;
				case right:
					X++;
					break;
				case down:
					Y--;
					break;
				case left:
					X--;
					break;
				}
			}
			if (Move[j] == 'B'){ //명령어가 B일때
				switch (Direction){ //방향에 따라서 좌표값 이동
				case up:
					Y--;
					break;
				case right:
					X--;
					break;
				case down:
					Y++;
					break;
				case left:
					X++;
					break;
				}
			}
			// 움직인 면적을 좌표를 가지고 움직이기때문에
			// Max값과 Min값을 이용해 x,y가 음수일때의 면적까지 포함
			if (X > MaxX && X > 0)
				MaxX = X;
			if (Y > MaxY && Y > 0)
				MaxY = Y;
			if (X < MinX && X < 0)
				MinX = X;
			if (Y < MinY && Y < 0)
				MinY = Y;
		}
		// 움직인 면적을 구한다.
		// 각 테스트 별로 답을 쉽게 알아보기 위해 endl;
		cout << (MaxX - MinX)*(MaxY - MinY) << endl;
	}
}
