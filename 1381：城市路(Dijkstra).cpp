#include<bits/stdc++.h>
const int MAX=2e3+5;
const int INF=0x3f3f3f3f;
using namespace std;
int maps[MAX][MAX];
int n,m;
int dis[MAX];
bool vis[MAX];
void F(int start){
	vis[start]=true;
	for(int i=1;i<=n;i++){
		dis[i]=maps[start][i];
	}
	for(int i=2;i<=n;i++){
		int min_node=-1;
		int min_dis=INF;
		for(int u=1;u<=n;u++){
			if(!vis[u]&&dis[u]<min_dis){
				min_dis=dis[u];
				min_node=u;
			}
		}
		vis[min_node]=true;
		for(int u=1;u<=n;u++){
			int new_dis=dis[min_node]+maps[u][min_node];
			if(!vis[u]&&new_dis<dis[u]){
				dis[u]=new_dis;
			}
		}
	}
}
int main(){
	memset(maps,INF,sizeof(maps));
	memset(dis,INF,sizeof(dis));
	memset(vis,false,sizeof(vis));
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a,b,c;
		cin>>a>>b;
		cin>>c;
		if(maps[a][b]>c){
			maps[a][b]=maps[b][a]=c;
		}
	}
	F(1);
	if(dis[n]!=INF)
		cout<<dis[n];
	else{
		cout<<"-1";
	}
	return 0;
}
