#include <iostream>
using namespace std;

int main() {
	int T,M,N,j,k,x,y,count;
	int m,n,r,U;
	
	cin>>T;
	for(int i=0 ; i<T ; i++){
		count=0; j=0; k=0;
		cin>>M>>N>>x>>y;
		m=M; n=N;
		if(x>M || y>N)
			cout<<"-1"<<endl;
		if(m>n){
			while(n!=0){
				r = m % n;
				m = n;
				n = r;
			}
			U = m;
		}
		else{
			while(m!=0){
				r = n % m;
				n = m;
				m = r;
			}
			U = n;
		}
		while(1){
			if(j>N/U || k>M/U){
				cout<<"-1"<<endl;
				break;
			}
			if(y+N*k == x+M*j){
				cout << y+N*k << endl;
				break;
			}
			if(y+N*k > x+M*j){
				j++;
			}
			else if(y+N*k < x+M*j){
				k++;
			}
		}
	}
}