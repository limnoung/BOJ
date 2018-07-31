#include <stdio.h>
#include <string.h>

int main()
{
	int Num, Size, i, j;
    char Name[50][51]={NULL}, Ans[1][51]={NULL};

	scanf("%d", &Num);

	for (i = 0; i < Num; i++){
		scanf("%s", &Name[i]);
	}

	Size = strlen(Name[0]);

	for (j = 0; j < Size; j++){
		Ans[0][j] = Name[0][j];
		for (i = 0; i < Num; i++){
			if (Name[0][j] != Name[i][j])
				Ans[0][j] = '?';
		}
	}
	for (i = 0; i < Size; i++)
		printf("%c", Ans[0][i]);
}