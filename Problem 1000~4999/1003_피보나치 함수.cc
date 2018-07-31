#include <iostream>
using namespace std;

int fibonacci(int n) {
	static int fibo[40];
	if(fibo[n]>0){
		return fibo[n];
	}
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else
    {
	return fibo[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
	int T,N;
	cin >> T;
	for(int i = 0 ; i<T ; i++){
		cin >> N;
		if(N==0)
			cout << "1 0"<<endl;
		else if(N==1)
			cout << "0 1"<<endl;
		else{
		cout << fibonacci(N-1) << " " << fibonacci(N) << endl;
		}
	}
}