#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;
int T, N, Group;
typedef struct {
	  int x;
	  int y;
	  int R;
	  int group;
}pos;
pos a[3000];
bool isDot(const pos a, const pos b) {
	  double distance = sqrt(pow((b.y - a.y), 2) + pow((b.x - a.x), 2));
		return (double)(a.R + b.R) >= distance;

}
bool compare(pos a, pos b){
	return (a.y*a.y)+(a.x*a.x)<(b.y*b.y)+(b.x*b.x);
}
void isConnect(int i)
{
	  queue<int>q;
	  q.push(i);
	  while (!q.empty()) {
			int x = q.front();
			a[x].group = Group;
			q.pop();
			for (int j = 0; j < N; j++) {
				  if (a[j].group==0) {
						if (isDot(a[x], a[j])) {
							  a[j].group = Group;
							  q.push(j);
						}
				  }
			}
	  }
}
int main()
{
	  scanf("%d", &T);
	  while (T) {
	  		Group = 1;
			scanf("%d", &N);
			for (int i = 0; i < N; i++){
				scanf("%d %d %d", &a[i].x, &a[i].y, &a[i].R);
				a[i].group = 0;
			}
			sort(&a[0],&a[N],compare);
			for (int i = 0; i < N; i++) {
				  if ( a[i].group == 0) {
						isConnect(i);
						Group++;
				  }
			}
			for(int i=0 ; i<N ; i++)
				a[i].group = 0;
			printf("%d\n", Group - 1);
			T--;
	  }

}