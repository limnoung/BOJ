#include <stdio.h>


int main()
{
 int N, M, A[50], B[50], Ans, Nold;
 int MinA = 0, MinB = 0, Count1 = 0;
 // N : 사야할 개수 , M : 브랜드의 개수
 // A : 패키지의 가격 배열 , B : 낱개의 가격 배열
 // Ans : 답

 scanf("%d", &N);
 scanf("%d", &M);

 Nold = N; // 원래의 N을 하나의 변수에 저장해준다.

 for (int i = 0; i<M; i++){
  scanf("%d", &A[i]);
  scanf("%d", &B[i]);
 }

 for (int i = 1; i<M; i++){ // 최소값의 인덱스 넘버를 저장한다.
  if (A[MinA]>A[i])
   MinA = i;
  if (B[MinB]>B[i])
   MinB = i;
 }

 while (N >= 6){ // 사야할 개수 N에 6이 얼마나 들어갈수있는지 확인한다.
  N = N - 6; // N에다 6을 빼고
  Count1++;  // Count를 증가시킨다.
 }

 if (A[MinA] > (6 * B[MinB])) // 패키지의 가격이 6개의 개별 가격보다 높은 경우
  Ans = Nold*B[MinB];
 else if (A[MinA] < (N*B[MinB])) // 패키지의 가격이 while문을 돌리고 난뒤 N개의 개별가격 보다 낮을경우
  Ans = A[MinA] * Count1 + A[MinA];
 else // 그 외 상황일때
  Ans = Count1*A[MinA] + N*B[MinB];

 printf("%d", Ans);
}
