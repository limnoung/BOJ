#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	int Case = 0;
	while(1){
		Case++;
		int alpha[52] = { 0 };
		int index = 0, check = 0;
		char c;
		vector<char> ca;
		while ((c = getchar()) != '\n') {
			ca.push_back(c);
			if (c >= 97 && c <= 122)
				alpha[c - 71]++;
			else if (c >= 65 && c <= 90)
				alpha[c - 65]++;
		}
		if (ca.size()==3 && ca.at(0)=='E' && ca.at(1)=='N' && ca.at(2) =='D') {
			check = 1;
		}
		ca.clear();
		index = 0;
		while ((c = getchar()) != '\n') {
			ca.push_back(c);
			if (c >= 97 && c <= 122)
				alpha[c - 71]--;
			else if (c >= 65 && c <= 90)
				alpha[c - 65]--;
		}
		if (ca.size() == 3 && ca.at(0) == 'E' && ca.at(1) == 'N' && ca.at(2) == 'D' && check == 1)
			break;
		else {
			int i;
			check = 0;
			for (i = 0; i < 52; i++)
				if (alpha[i] != 0)
					break;
			if (i == 52)
				printf("Case %d: same\n", Case);
			else
				printf("Case %d: different\n", Case);
		}
	}

}