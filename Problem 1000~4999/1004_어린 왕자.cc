#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T,n,x1,x2,y1,y2,cx,cy,r,Ans;
	cin>>T;
	for(int i=0 ; i<T ; i++){
		Ans=0;
		cin>>x1>>y1>>x2>>y2;
		cin>>n;
		for(int j=0 ; j<n ; j++){
			cin>>cx>>cy>>r;
			if((pow(x2-cx,2)+pow(y2-cy,2))<pow(r,2) && (pow(x1-cx,2)+pow(y1-cy,2))<pow(r,2)){
			
			}
			else if((pow(x2-cx,2)+pow(y2-cy,2))<pow(r,2) || (pow(x1-cx,2)+pow(y1-cy,2))<pow(r,2)){
				Ans++;
			}
		}
		cout << Ans << endl;
	}
}