#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[10], a, index=0;
	cin >> a;
	while(a!=0){
		arr[index] = a%10;
		a/=10;
		index++;
	}
	sort(arr,arr+index);
	for(int i=index-1 ; i>=0 ;i--)
		cout << arr[i];
	return 0;
}