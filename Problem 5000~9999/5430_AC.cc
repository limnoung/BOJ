#include <iostream>
#include <deque>
using namespace std;
int main()
{
	int T;
	deque<short> dq;
	scanf("%d", &T);
	while (T) {
		char p[100001] = { 0 };
		int n, index = 0;
		short temp, check = 0, check_Reverse = 0;
	
		T--;
		dq.clear();

		scanf("%s", &p);
		scanf("%d", &n);
		getchar();
		getchar();
		for (int i = 0; i < n; i++) {
			scanf("%hd", &temp);
			getchar();
			dq.push_back(temp);
		}
		while (p[index] != 0) {
			if (p[index] == 'R') {
				if (check_Reverse == 0)
					check_Reverse = 1;
				else
					check_Reverse = 0;
			}
			else if (p[index] == 'D') {
				if (dq.empty()) {
					check = 1;
					printf("error\n");
					break;
				}
				else
				{
					if (check_Reverse == 0)
						dq.pop_front();
					else
						dq.pop_back();
				}
			}
			index++;
		}
		if (check == 0) {
			printf("[");
			if (dq.empty()) {
				printf("]\n");
			}
			else {
				if (check_Reverse == 0) {
					for (int i = 0; i < dq.size() - 1; i++)
						printf("%d,", dq.at(i));
					printf("%d]\n", dq.back());
				}
				else {
					for (int i = dq.size()-1; i >0; i--)
						printf("%d,", dq.at(i));
					printf("%d]\n", dq.front());
				}
			}
		}
		while (getchar() != '\n');
	}
}
