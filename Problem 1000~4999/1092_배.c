#include <stdio.h>
#include <stdlib.h>
int tempArray[10000];
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
	int N,M,time=0,i,j,Count=0;
	int *Crane, *Box, *CraneCounter, *BoxCounter;
	//CraneCounter=1 UsingCrane
	//BoxCounter=1 MovedBox
	scanf("%d",&N);
	Crane=(int*)malloc(sizeof(int)*N);
	CraneCounter=(int*)malloc(sizeof(int)*N);
	for(i=0 ; i<N ; i++){
		scanf("%d",&Crane[i]);
		CraneCounter[i]=0;
	}
	scanf("%d",&M);
	Box=(int*)malloc(sizeof(int)*M);
	BoxCounter=(int*)malloc(sizeof(int)*M);
	for(i=0 ; i<M ; i++){
		scanf("%d",&Box[i]);
		BoxCounter[i]=0;
	}
	mergeSort(Crane,0,N-1);
	mergeSort(Box,0,M-1);
	if(Box[M-1]>Crane[N-1])
	printf("-1");
	else{
	while(Count!=M){
		for(i=N;i>0;i--){
			for(j=M;j>0;j--){
				if((Box[j-1]<=Crane[i-1]) && BoxCounter[j-1]==0 && CraneCounter[i-1]==0){
					BoxCounter[j-1]=1;
					CraneCounter[i-1]=1;
					Count++;
					break;
				}
			}
		}
		time++;
		for(i=0 ; i<N ; i++)
			CraneCounter[i]=0;
	}
		printf("%d",time);
	}
	free(Crane);
	free(CraneCounter);
	free(Box);
	free(BoxCounter);
}
