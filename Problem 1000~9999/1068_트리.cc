#include <stdio.h>

int main(void) {

	int N, i, j, k, Erase, Node[50], OldNode, Count2;
	int Count, Ans;

	Ans = 0;

	scanf("%d", &N);
	for (i = 0; i<N; i++){
		scanf("%d", &Node[i]);
	}
	scanf("%d", &Erase);

	if (N == 1 && Erase == 0)
		Ans = 0;
	else{
		for (i = 0; i < N; i++){
			Count = 0;
			for (j = 0; j < N; j++){
				if (Node[j] == i){
					Count++;
					break;
				}
			}
			if (Count == 0){
				Ans++;
				OldNode = i;
				for (k = 0; k < N; k++){
					OldNode = Node[OldNode];
					if (i == Erase){
						Count2 = 0;
						for (j = 0; j < N; j++){
							if (Node[j] == Node[i])
								Count2++;
						}
						if (Count2 == 1){
							Ans++;
						}
						Ans--;
						break;
					}
					else if (OldNode < 0)
						break;
					else if (OldNode == Erase){
						Ans--;
						break;
					}
				}
			}
		}
	}
	printf("%d", Ans);
	return 0;
}
