#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2000][2000],b[2000][2000],c[2000][2000];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[m][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[m][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			c[m][j]=a[m][j]+b[m][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<c[m][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
