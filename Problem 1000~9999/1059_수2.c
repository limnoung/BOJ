#include <stdio.h>
#include <stdlib.h>
int tempArray[100]={0,};
void merge(int arr[], int left, int middle, int right) {
    int arrPivot = left;                // 합병할 배열의 시작 지점
    int arrLeftPivot = left;            // 왼쪽 배열의 시작지점
    int arrRightPivot = middle + 1;        // 오른쪽 배열의 시작지점
    // 왼쪽 또는 오른쪽 배열이 빌 때까지 합병
    while (arrLeftPivot <= middle && arrRightPivot <= right) {
        // 왼쪽 배열과 오른쪽 배열의 원소를 비교해서 더 작은 원소를 합병할 배열에 넣기
        if (arr[arrLeftPivot] < arr[arrRightPivot]) {
            tempArray[arrPivot] = arr[arrLeftPivot];
            arrLeftPivot += 1;
        }
        else {
            tempArray[arrPivot] = arr[arrRightPivot];
            arrRightPivot += 1;
        }
        arrPivot++;
    }
    // 왼쪽 배열에 무언가 남아있으면 합병할 배열에 채워넣기
    while (arrLeftPivot <= middle) {
        tempArray[arrPivot] = arr[arrLeftPivot];
        arrPivot += 1;
        arrLeftPivot += 1;
    }
    // 오른쪽 배열에 무언가 남아있으면 합병할 배열에 채워넣기
    while (arrRightPivot <= right) {
        tempArray[arrPivot] = arr[arrRightPivot];
        arrPivot += 1;
        arrRightPivot += 1;
    }
    // 합병할 배열에 오름차순 정렬이 완료되면 원래 배열로 복사하기
    for (int arrPivot = left; arrPivot <= right; arrPivot++) {
        arr[arrPivot] = tempArray[arrPivot];
    }
}
void mergeSort(int arr[], int left, int right) {
    int middle = ((right + left) / 2);
    if (right - left > 0) {
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
int main(void) {
	int L,N,i,j,Ans;
	int *Lucky;
	scanf("%d",&L);
	Lucky=(int*)malloc(sizeof(int)*L);
	for(i=0 ; i<L ; i++){
		scanf("%d",&Lucky[i]);
	}
	scanf("%d",&N);
	mergeSort(Lucky,0,L-1);
	for(i=0 ; i<L ; i++){ //N을 포함한 최대 SET의 수
			if(Lucky[i]==N){
			i=-1;
			break;
			}
			else if(Lucky[i]>N)
			break;
		}
	for(j=L-1 ; j>=0 ; j--){ //N을 포함한 최소 SET의 수
		if(j==0 && Lucky[j]>N){
			j=-2;
			break;
		}
		if(Lucky[j]==N){
			j=-1;
			break;
		}
		else if(N>Lucky[j])
		break;
	}
	if(j==-2){
			j=0;
			Ans=(N-1)+(Lucky[j]-N-1)+(N-1)*(Lucky[j]-N-1);
	}
	else if(i==-1 || j==-1)
	Ans=0;
	else{
		//[4,X] + [X,4] + [X between(4) Y]
		Ans = (Lucky[i]-N-1)+(N-Lucky[j]-1)+(N-Lucky[j]-1)*(Lucky[i]-N-1);
	}
	printf("%d",Ans);
}
	
