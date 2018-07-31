#include <iostream>
#include <queue>
using namespace std;
int C,N,Count=0;
int visit[101][101]={0};
void BFS(int i){
	
	queue<int> q;
	q.push(i);
	while(!q.empty()){
		int x = q.front();
		Count++;
		q.pop();
		for(int j=2 ; j<=C ;j++){
			if(visit[x][j]==1){
				visit[j][x]=visit[x][j]=2;
				q.push(j);
				for(int k=1 ; k<=C ; k++){
					visit[k][j]=2;
				}	
			}	
		}
	}
}

int main(){
	scanf("%d %d",&C,&N);
	
	for(int i=0 ;i<N ;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a!=b)
			visit[a][b]=visit[b][a]=1;
	}
	
	for(int i=2 ; i<=C ; i++){
		if(visit[1][i]==1){
			visit[1][i]=visit[i][1]= 2;
			BFS(i);
		}
	}
	printf("%d",Count);
}