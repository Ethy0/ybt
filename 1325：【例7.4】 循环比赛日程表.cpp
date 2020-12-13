#include<bits/stdc++.h>
using namespace std;
int m,half=1,x=1;
int table[5000][5000];
int main(){
	cin>>m;
	table[1][1]=1;
	while(x<=m){
		for(int i=1;i<=half;i++){
			for(int j=1;j<=half;j++){
				table[i][j+half]=table[i][j]+half;
			}
		}
		for(int i=1;i<=half;i++){
			for(int j=1;j<=half;j++){
				table[i+half][j]=table[i][j+half];
				table[i+half][j+half]=table[i][j];
			}
		}
		half*=2;
		x++;
	}
	int tmp=pow(2,m);
	for(int i=1;i<=tmp;i++){
		for(int j=1;j<=tmp;j++){
			cout<<table[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
