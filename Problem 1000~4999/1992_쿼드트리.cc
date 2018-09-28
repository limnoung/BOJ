#include <cstdio>
#include <vector>
using namespace std;
char map[65][65] = { 0 };
vector<int> num;
vector<char> v;
void compress(int i, int j, int size){
	if (size == 1)
		v.push_back(map[i][j]);
	else
	{
		int s = size / 2;
		int count = 0, count2 = 0;
		v.push_back('(');
		compress(i, j, s);
		compress(i, j + s, s);
		compress(i + s, j, s);
		compress(i + s, j + s, s);
		for (int i = v.size() - 1; i > v.size() - 5; i--){
			if (v.at(i) == '1')
				count2++;
			else if (v.at(i) == '0')
				count++;
			else
				count = count2 = -100;
		}
		if (count < 0 && count2 < 0)
			v.push_back(')');
		else{
			if (count == 0){
				for (int index = 0; index < 5; index++)
					v.pop_back();
				v.push_back('1');
			}
			else if (count2 == 0){
				for (int index = 0; index < 5; index++)
					v.pop_back();
				v.push_back('0');
			}
			else{
				v.push_back(')');
			}
		}

	}
}
int main(){
	int N, count = 0, count2 = 0;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%c", &map[i][j]);
			if (map[i][j] == '0')
				count++;
			else if (map[i][j] == '1')
				count2++;
		}
		getchar();
	}
	if (count == 0)
		printf("1");
	else if (count2 == 0)
		printf("0");
	else{
		compress(0, 0, N);
		for (int i = 0; i < v.size(); i++)
			printf("%c", v[i]);
	}
}