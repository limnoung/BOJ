#include <iostream>
using namespace std;

int main() {
	int T,a,b,k,n;
	int Num[20];
	cin>>T;
	for(int i=0 ; i<T ; i++){
		cin>>a>>b;
		n=a%10;
		Num[0]=a%10; k=1;
		while(1){
			n=(n*a)%10;
			if(n==(a%10)){
				break;
			}
			else{
				Num[k]=n;
				k++;
			}
		}
		if(k==1){
			if(Num[0]==0)
				cout<<"10"<<endl;
			else
			cout << Num[0] <<endl;
		}
		else if(k>1){
			if(b%k>0)
				cout<<Num[(b%k)-1]<<endl;
			else
				cout<<Num[k-1]<<endl;
		}
	}
	
}