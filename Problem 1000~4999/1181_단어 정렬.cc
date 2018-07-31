#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(const string &a, const string &b) {
	  if (a.size() == b.size()) {
			return a > b;
	  }
	  else if (a.size() > b.size())
			return true;
	  else
			return false;
}
int main()
{
	  int N;
	  vector<string> A;
	  char text[20000] = "";
	  string temp = "";

	  scanf("%d", &N);
	  for (int i = 0; i < N; i++) {
			scanf("%s", text);
			A.push_back(text);
	  }
	  sort(A.begin(), A.end(),compare);
	  while (A.size() != 0) {
			if (temp != A.back()) {
				  printf("%s\n", A.back().c_str());
				  temp = A.back();
				  A.pop_back();
			}
			else
				  A.pop_back();
 	  }
}