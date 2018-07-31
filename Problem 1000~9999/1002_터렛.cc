#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T,x1,y1,r1,x2,y2,r2;
	
	cin >> T;
	for(int i = 0 ; i<T ; i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		if(x1==x2 && y1==y2 && r1==r2)
			cout << "-1" << endl;
		else if((x1==x2 && y1==y2 && r1!=r2) || pow(r1-r2,2) > pow(x2-x1,2)+pow(y2-y1,2) || pow(r1+r2,2) < pow(x2-x1,2)+pow(y2-y1,2))
			cout << "0" << endl;
		else if(pow(r1+r2,2)==pow(x2-x1,2)+pow(y2-y1,2) || pow(r1-r2,2)==pow(x2-x1,2)+pow(y2-y1,2))
			cout << "1" << endl;
		else if(pow(r1+r2,2)>pow(x2-x1,2)+pow(y2-y1,2))
			cout << "2" << endl;
	}
	return 0;
}