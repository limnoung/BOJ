#include <stdio.h>
int tempArray[100000] = { 0, };
// 배열 합병 함수
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
// 합병정렬 함수
void mergeSort(int arr[], int left, int right) {
	int middle = ((right + left) / 2);
	if (right - left > 0) {
		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);
		merge(arr, left, middle, right);
	}
}
int binary_search(int arr[], int v, int len) {
	int low, mid, high;
	low = 0;
	high = len - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (v < arr[mid])
			high = mid - 1;
		else if (v > arr[mid])
			low = mid + 1;
		else
			return 1;
	}
	return 0;
}
int main() {
	int A[100000], B[100000];
	int N, M, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	mergeSort(A, 0, N - 1);
	scanf("%d", &M);
	for (i = 0; i < M; i++)
		scanf("%d", &B[i]);
	for (i = 0; i < M; i++) 
		printf("%d\n",binary_search(A, B[i], N));
}
