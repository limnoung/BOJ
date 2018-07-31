#include <iostream>
#include <map>
#include <functional>
#include <string>
using namespace std;

int main() {
      map<string, int> m;
      map<string, int>::iterator iter;
      int N, index = 0, max=0;
      string book, max_s;
      cin >> N;
      for(int i = 0; i < N; i++) {
	    cin >> book;
	    iter = m.find( book );
	    if(iter == m.end())
		  m.insert( map<string, int>::value_type( book, 1 ) );
	    else
		  m[book]++;
      }
      for(iter = m.begin(); iter != m.end(); iter++) {
	    if(max < iter->second) {
		  max = iter->second;
		  max_s = iter->first;
	    }
      }
      cout << max_s;
}