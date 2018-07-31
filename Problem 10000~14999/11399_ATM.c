#include <stdio.h>
int tempArray[1000] = { 0, };
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
int main() {
	int N, ans;
	int people[1000];
	ans = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &people[i]);
	}
	mergeSort(people, 0, N - 1);
	for (int i = 0; i < N; i++) {
		for (int j = i; j >= 0; j--) {
			ans += people[j];
		}
	}
	printf("%d", ans);
}