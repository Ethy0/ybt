#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int n,m;
int a[111]={0};
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	int tmp;
	while(!q.empty()){
		++tmp;
		int x=q.front();
		if(tmp==m){
			tmp=0;
			cout<<q.front()<<" ";
		}
		else{
			q.push(x);
		}
		q.pop();
	}
	return 0;
}
