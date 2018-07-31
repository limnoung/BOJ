#include <iostream>
using namespace std;

int main(){
	int x,y,w,h;
	int min1, min2;
	cin >> x; cin >> y;
	cin >> w; cin >> h;

	if(x>(w/2))
		min1 = w-x;
	else
		min1 = x;
	if(y>(h/2))
		min2 = h-y;
	else
		min2 = y;

	if(min1>min2)
		cout << min2;
	else
		cout << min1;
}

